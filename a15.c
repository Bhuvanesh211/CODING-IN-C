#include <stdio.h>

int get_nbits(int, int);

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);
}

int get_nbits(int num , int n)
{
    int mask;
    mask = num & (1 << n) - 1;
    return mask;
}