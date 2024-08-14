#include <stdio.h>
int main()
{
    int a = 100;
    int b = 200;
    int carry;
    while (b)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    printf("Addition of two no is:%d", a);
}
