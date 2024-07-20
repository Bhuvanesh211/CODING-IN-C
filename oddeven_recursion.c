#include<stdio.h>

int numbers(int n)
{
    static int i =1;
    if( i <= n)
    {
        if( i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
        numbers(n);
    }
}
    

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Even numbers are : ");
    numbers(n);
    return 0;
}