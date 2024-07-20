#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, j, flag;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        flag = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}