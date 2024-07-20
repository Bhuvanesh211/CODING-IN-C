#include <stdio.h>

int print_bits(int, int);

int main()
{
    int num, n;

    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);

    printf("Binary form of %d:", num);
    print_bits(num, n);
}

int print_bits(int num, int n)
{
    int i, result, mask;
    for (i = n - 1; i >= 0; i--)
    {
        mask = (num >> i) & 1;
        result = (mask == 0) ? printf("0") : printf("1");
    }

    return result;
}