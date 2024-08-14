#include<stdio.h>
int sum_of_digit(int num)
{
    static int  sum=0;
    int rem;
    if(num)
    {
        rem=num%10;
        sum=sum+rem;
        sum_of_digit(num/10);

    }
    return  sum;

    

}
int main()
{
     int num;
     printf("Enter number:");
     scanf("%d",&num);
     int res =sum_of_digit(num);
     printf("Sum of digit is:%d",res);

}