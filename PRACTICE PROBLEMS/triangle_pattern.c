#include <stdio.h>
int main()
{
    int num, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
