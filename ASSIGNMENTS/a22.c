#include <stdio.h>

int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num: ");
    scanf("%d", &num);
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    ret = circular_right(num, n);
    printf("Result in Binary : ");
    print_bits(ret);
}

int circular_right(int num, int n)
{
    int no_of_bits = sizeof(num) * 8;
    

    if (n == 0)
    {
        return num;
    }
        

    int temp = (unsigned int)num >> n;

    temp = temp | (num << (no_of_bits - n));

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