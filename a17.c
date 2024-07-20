#include <stdio.h>

int get_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}

int get_nbits_from_pos(int num, int n , int pos)
{
    int mask = ((1 << n) - 1);
    num = num >> (pos - n + 1);
    int res = (num & mask);
    return res;
}