#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;

    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);

    res = replace_nbits_from_pos(num, a, b, val);

    printf("Result = %d\n", res);
}
int replace_nbits_from_pos(int num, int a, int b, int val)
{
    int mask, c;
    c = b - a + 1;
    mask = ((1 << a) - 1) << c;
    num = num & ((1 << a) - 1);
    val = val & ~mask;
    num = num << c;
    return num | val;
}
