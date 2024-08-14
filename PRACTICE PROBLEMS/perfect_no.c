#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter No:");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("It is Perfect No.\n");
    }
    else
    {
        printf("It is Not Perfect No.\n");
    }
}