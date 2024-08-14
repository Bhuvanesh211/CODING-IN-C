#include <stdio.h>
int main()
{
    int num = 4000;
    int num2 = 0, r, rem = 0;
    while (num)
    {
        r = num % 10;
        if (r == 0)
        {
            r = 1;
        }
        num2 = (num2 * 10) + r;
        num = num / 10;
    }
    num = 0;
    while (num2)
    {
        r = num2 % 10;

        num = (num * 10) + r;
        num2 = num2 / 10;
    }
    printf("The number is:%d", num);
}