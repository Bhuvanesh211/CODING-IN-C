#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number in binary : ");
    scanf("%d", &num);
    int num1 = num;
    int weight = 1;
    int rem,dec = 0;
    while(num1 != 0)
    {
        rem = num1 % 10;
        dec = dec + rem * weight;
        num1 = num1 / 10;
        weight *= 2;
    }
    
    printf("Decimal value of %d is %d",num, dec);
    return 0;
    
}