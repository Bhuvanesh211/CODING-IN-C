#include<stdio.h>
void function(int num,int *sq,int *cu)
{
    *sq=num * num;
    *cu=num * num * num;
}
int main()
{
     int num1,sq=0,cu=0;
     printf("Enter the first number: ");
     scanf("%d",&num1);
    //  printf("Enter the second number: ");
    //  scanf("%d",&num2);
     function(num1,&sq,&cu);
     printf("Square of  %d is %d",num1,sq);
    printf("Cube of  %d is %d",num1,cu);





}