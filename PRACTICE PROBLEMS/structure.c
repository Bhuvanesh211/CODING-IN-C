#include<stdio.h>
struct student
{   
    int id;
    char name[30];
    char address[30];
    int yr_batch;/* data */
}s;

int menu()
{
    int op;
    printf("1.Add Student\n2.View Student List\n3.Delete Student List\n4.Modify Student Info\n5.Exit\nEnter Your Choise:");
    scanf("%d",&op);
    return op;
}
void read_Details()
{
     printf("Enter Student Details:\n");
    printf("Enter Id:");
    scanf("%d",&s.id);
    printf("Enter Name:");
    scanf("%s",s.name);
    printf("Enter Address:");
    scanf("%s",s.address);
    printf("Enter Year:");
    scanf( "%d",&s.yr_batch);
}
void add_student()
{
   
   FILE *fp=fopen("student.txt","a");
   read_Details();
   fwrite( &s,sizeof(struct student),1,fp);
   fclose(fp);



}

void view_student_details()
{
       FILE *fp=fopen("student.txt","r");
       printf("\n%-5s%-15s%-15s%-5s\n","ID","Name","Address","Year");

       while(fread( &s,sizeof(struct student),1,fp)>0)
       {
            printf("%-5d%-15s%-15s%-5d\n",s.id, s.name, s.address, s.yr_batch);

       }
       printf("\n");
       fclose(fp);

}
void delete_student_list()
{
    fclose(fopen("student.txt", "wb"));

}
void modify_student()
{
    //write  code here

}
int main()
{
     int op;
     while(1)
     {
        op=menu();
        switch(op)
        {
            case 1:
            add_student();
            break;
            case 2:
            view_student_details();
            break;
            case 3:
            printf("Student List Deleted Successfully\n");
            delete_student_list();
            break;
            case 4:
            modify_student();
            break;
            case 5:
            
            return 0;
            break;
            default:
            printf("Invalid Option\n");
        }

     }
}