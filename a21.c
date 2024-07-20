#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_left(num, n);
    printf("%d ",ret);
    printf("\n");

    print_bits(ret);
}

int circular_left(int num, int n)
{
    //n = n % 32;

    if (n == 0)
    {
        return num;
    }
        

    int temp = num << n;

    temp = temp | (unsigned int)num >> (32 - n);

    return temp;
}

int print_bits(int num)
{
    int bits, res;
    bits = sizeof(num) * 8;
    for (int i = bits - 1; i >= 0; i--)
    {
        res = (num >> i) & 1;
        (res == 0) ? printf("0 ") : printf("1 ");
    }

    return res;
}