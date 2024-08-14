#include <stdio.h>
int main()
{
    int num = -10;
    num = (~num);
    num = num + 1;
    for (int i = 7; i > 0; i--)
    {
        // printf("%d",(num>>i) & 1);
        // f((num>>i) & 1)
        if (num & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}