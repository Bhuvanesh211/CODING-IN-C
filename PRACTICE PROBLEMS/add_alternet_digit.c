#include <stdio.h>
int main()
{
    int n = 1234567;
    int r, flag = 0, sum = 0;
    while (n)
    {
        r = n % 10;
        if (flag % 2 == 0)
        {
            sum = sum + r;
        }
        flag++;
        n=n/10;
    }
    printf("The sum:%d", sum);
}