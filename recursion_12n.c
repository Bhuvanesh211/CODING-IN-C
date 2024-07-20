#include<stdio.h>

int numbers(int n)
{
    static int i =0;
    if( i <= n)
    {
        printf("%d ", i);
        i++;
        numbers(n);
    }
}
    

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    numbers(n);
    return 0;
}