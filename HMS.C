#include<stdio.h>  
#include<string.h>  
struct ad  
{  
    char p_name[30];  
    char p_disease[30];  
    int p_cabin,p_phone,p_age;
} x[100];  
int n,i,j=0,a=0,sum=0,g,flag,num;  
void read();  
void add();  
void view();  
void search();  
void edit();  
void del();  
void show();
void write();
int main()  
{
 int c,i,q ,m ,n;
 read();  

    printf("\n***Simple Hospital Management System***\n");  


while(c!=6)
{
printf("\nAdd Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n");  
    
printf("\nEnter the choice\n");
scanf("%d",&c);//choice for option  
        fflush(stdin);//making it clear  
        if(c==1)
     {  
            system("cls");  
            add();  
        }  
        else if(c==2)//view  
        {  
            system("cls");  
            view();  
        }  
        else if(c==3)//search  
        {  
            system("cls");  
            search();  
        }  
        else if(c==4)//edit  
        {  
            system("cls");  
            edit();  
        }  
        else if(c==5)//delete  
        {  
            system("cls");  
            del();  
        }  
        else if(c==6)  
        {  
            write();  
            return 0;  
        }  
        else  
        {  
            system("cls");  
            printf("\n\nInvalid input , try again by using valid inputs");  
        }  
        printf("\n\n");  
    }
    return 0;
}  
void add()  
{  
    printf("\n\n");  
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs  
    printf("How many entry do you want to add=\n");  
    scanf("%d",&n);  
    sum=n+num;  
  
    for(i=num,j=0; i<sum; i++)  
    {  
        printf("\n");  
        fflush(stdin);  
        printf("Enter patient's Name = ");  
        gets(x[i].p_name);  
        fflush(stdin);  
        printf("Enter disease = ");  
        gets(x[i].p_disease);  
        fflush(stdin);  
        printf("Enter the age = ");  
        scanf("%d",&x[i].p_age);  
        fflush(stdin);  
        printf("Enter cabin no = ");  
        scanf("%d",&x[i].p_cabin);  
        fflush(stdin);  
        printf("Enter phone number = ");  
        scanf("%d",&x[i].p_phone);  
        fflush(stdin);  
        printf("\n");  
        j++;  
        a++;  
        num++;  
    }  
}  
  
void view()  
{  
    for(i=0; i<num; i++)  
    {  
        printf("\n");  
        printf("Serial Number=%d\n",i);  
        printf("Name = ");  
        puts(x[i].p_name);  
        printf("Disease = ");  
        puts(x[i].p_disease);  
        printf("Cabin no = %d\nPhone number = 0%d\nAge=%d",x[i].p_cabin,x[i].p_phone,x[i].p_age);  
        printf("\n\n");  
    }  
}  
void edit()  
{  
    int q,p;  
    fflush(stdin);  
    printf("What do you want to edit ?\n");  
    printf("Enter your option\n");  
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin\n5.Phone no.\n");  
    printf("Option=");  
    scanf("%d",&q);//option  
    if(q<=5)  
    {  
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);  
        scanf("%d",&p);//serial number  
        if(p<num)  
        {  
            if(q==1)  
            {  
                fflush(stdin);  
                printf("Enter the new name=");  
                gets(x[p].p_name);  
  
            }  
            else if(q==2)  
            {  
                fflush(stdin);  
                printf("Enter the new Disease=");  
                gets(x[p].p_disease);  
            }  
            else if(q==3)  
            {  
                fflush(stdin);  
                printf("Enter the new Age=");  
                scanf("%d",&x[p].p_age);  
            }  
  
            else if(q==4)  
            {  
                fflush(stdin);  
                printf("Enter the new Cabin no=");  
                scanf("%d",&x[p].p_cabin);  
            }  
  
            else if(q==5)  
            {  
                fflush(stdin);  
                printf("Enter the new Phone no =");  
                scanf("%d",&x[p].p_phone);  
            }  
        }  
        else  
        {  
            printf("\n\nInvalid Serial \nTry Again !!\n\n");  
        }  
    }  
    else  
    {  
        printf("\n\nInvalid option\nTry Again!!\n\n");  
    }  
}  
void search()  
{  
    int s,h,f;  
    char u[100];  
    printf("By what do you want to search ?\n");  
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Cabin no.\n5.Phone no.\n6.Age\n\nOption = ");  
    scanf("%d",&h);  
    if(h==1)  
    {  
        printf("Enter Serial number of the patient=");  
        scanf("%d",&s);  
        if(s<num)  
        {  
            printf("\n");  
            printf("Serial Number=%d\n",s);  
            printf("Name = ");  
            puts(x[s].p_name);  
            printf("Disease = ");  
            puts(x[s].p_disease);  
            printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[s].p_cabin,x[s].p_phone,x[s].p_age);  
            printf("\n\n");  
        }  
        else  
            printf("\n\nNot Found\n\n");  
    }  
    else if(h==2)//problem is here.........  
    {  
        int f=1;  
        fflush(stdin);  
        printf("Enter your name=");  
        gets(u);  
        fflush(stdin);  
        for(g=0; g<num; g++)  
        {  
            if(strcmp(u,x[g].p_name)==0)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].p_name);  
                printf("Disease = ");  
                puts(x[g].p_disease);  
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].p_cabin,x[g].p_phone,x[g].p_age);  
                printf("\n\n");  
                f=0;  
  
            }  
        }  
        if(f==1)  
            printf("\nNot Found\n");  
  
  
  
    }  
    else if(h==3)  
    {  
        int f=1;  
        fflush(stdin);  
        printf("Enter Disease = ");  
        gets(u);  
        fflush(stdin);  
        for(g=0; g<num; g++)  
        {  
            if(strcmp(u,x[g].p_disease)==0)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].p_name);  
                printf("Disease = ");  
                puts(x[g].p_disease);  
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].p_cabin,x[g].p_phone,x[g].p_age);  
                printf("\n\n");  
                f=0;  
            }  
  
  
        }  
        if(f==1)  
            printf("\nNot Found\n");  
  
  
    }  
    else if(h==4)  
    {  
        int f=1;  
        printf("Enter Cabin number = ");  
        scanf("%d",&f);  
        for(g=0; g<num; g++)  
        {  
            if(f==x[g].p_cabin)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].p_name);  
                printf("Disease = ");  
                puts(x[g].p_disease);  
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].p_cabin,x[g].p_phone,x[g].p_age);  
                printf("\n\n");  
                f=0;  
            }  
  
        }  
        if(f==1)  
            printf("Not Found\n\n");  
  
    }  
    else if(h==5)  
    {  
        int f=1;  
        printf("Enter Phone number = ");  
        scanf("%d",&f);  
        for(g=0; g<num; g++)  
        {  
            if(f==x[g].p_phone)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].p_name);  
                printf("Disease = ");  
		puts(x[g].p_disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].p_cabin,x[g].p_phone,x[g].p_age);  
                printf("\n\n");  
                f=0;  
            }  
  
        }  
        if(f==1)  
            printf("Not Found");  
    }  
    else if(h==6)  
    {  
        int f=1;  
        printf("Enter Age = ");  
        scanf("%d",&f);  
        for(g=0; g<num; g++)  
        {  
            if(f==x[g].p_age)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].p_name);  
                printf("Disease = ");  
                puts(x[g].p_disease);  
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x[g].p_cabin,x[g].p_phone,x[g].p_age);  
                printf("\n\n");  
                f=0;  
            }  
  
        }  
        if(f==1)  
            printf("Not Found\n\n");  
  
    }  
    else  
        printf("\n\nInvalid input\n\n");  
  
  
  
  
}  
void del()  
{  
    int f,h;  
    printf("Enter the serial number of the patient that you want to delete=");  
    scanf("%d",&f);  
    if(f<num)  
    {  
        printf("What do you want ?\n");  
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Cabin\n6.Remove phone number\nOption = ");  
        scanf("%d",&h);  
        if(h==1)  
        {  
            while(f<num)  
            {  
                strcpy(x[f].p_name,x[f+1].p_name);  
                strcpy(x[f].p_disease,x[f+1].p_disease);  
                x[f].p_age=x[f+1].p_age;  
                x[f].p_cabin=x[f+1].p_cabin;  
                x[f].p_phone=x[f+1].p_phone;  
                f++;  
            }  
            num--;  
        }  
        else if(h==2)  
        {  
            strcpy(x[f].p_name,"Cleared");  
  
        }  
        else if(h==3)  
        {  
            strcpy(x[f].p_disease,"Cleared");  
        }  
        else if(h==4)  
        {  
            x[f].p_age=0;  
        }  
        else if(h==5)  
        {  
            x[f].p_cabin=0;  
        }  
        else if(h==6)  
        {  
            x[f].p_phone=0;  
        }  
  
    }  
    else  
        printf("\n\nInvalid Serial number\n");  
  
}  
void read()  
{  
    FILE *fp = fopen("patientinfo.txt","r");  
    if(fp == NULL)  
    {  
        //create empty file, so that we can open it  
        //in the next execution of this program  
        fp = fopen("patientinfo.txt","w");  
        fclose(fp);  
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");  

    }  
  
    num = fread(x, sizeof(struct ad),100, fp);  
    fclose(fp);  
}  
void write()  
{  
    FILE *fp = fopen("patientinfo.txt","w");  
    if(fp == NULL)  
    {  
        printf("Error");  
        exit(1);  
    }  
    fwrite(x, sizeof(struct ad),num, fp);  
  
    fclose(fp);  
}