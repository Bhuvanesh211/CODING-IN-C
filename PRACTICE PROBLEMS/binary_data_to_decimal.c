#include <stdio.h>
int binary_decimal(int num)
{
    int rem, sum = 0, mul = 1;
    while (num)
    {
        rem = num % 10;
        sum = sum + rem * mul;
        mul = mul * 2;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num = 1111;
    int sum = binary_decimal(num);

    printf("Decimal No:%d", sum);
}