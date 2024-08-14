#include<stdio.h>
typedef struct employee
{
    int id;
    char name[10];
    char address[20];
    char ms[10];

    int salary;
}emp;



int main()
{
    emp e1;
    printf("Enter Details: \n");

    scanf( "%d", &e1.id );
    scanf( "%s", e1.name );
    scanf( "%s", e1.address );
    scanf("%d",&e1.salary);
    

    scanf( "%s", e1.ms );
    printf("Employee Details are:\n");
    printf("ID- %d\nName-%s\nAddress-%s\nsalary-%d\nMarital Status-%s\n",e1.id,e1.name,e1.address,e1.salary,e1.ms );





}