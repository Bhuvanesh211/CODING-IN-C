#include<stdio.h>
    int rem,sum=0;
int rev(int num)
{
    if(num)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        rev(num/10);
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    int res;
    res=rev(num);
    printf("Reversed Number is:%d",res);
}