#include<stdio.h>
int main()
{
    int num,num1,sum = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    num1 = num;
    while(num > 0)
    {
        sum = sum + (num % 10);
        num /= 10;
    }
    printf("Sum of %d is %d",num1,sum);
    return 0;
}