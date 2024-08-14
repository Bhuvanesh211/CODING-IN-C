#include <stdio.h>
int x_power_y(int x, int y)
{
    int i = 1;
    int z = 1;
    if (i <= y)
    {
        z = x * x_power_y(x, y - 1);
    }
    return z;
}
int main()
{
    int x, y, res;
    printf("Enter  the value of x and y\n");
    scanf("%d%d", &x, &y);
    res = x_power_y(x, y);
    printf("The result of x^y= %d", res);
}