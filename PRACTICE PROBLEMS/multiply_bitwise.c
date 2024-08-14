#include <stdio.h>
int main()
{
    int a = 3, b = 3;
    int res=0;
    while (b) 
    {
        if (b & 1) 
        {
             res = res + a; 
        }
        a <<= 1; 
                 
        b >>= 1; 
    }
    printf("The multiplication is %d\n", res);
}