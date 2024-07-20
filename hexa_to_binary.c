#include<stdio.h>
int main()
{
    unsigned int hex;
    printf("Enter hexadecimal value : ");
    scanf("%X", &hex);
    int bits = sizeof(hex) * 8;
    printf("Binary value of 0x%X is : ",hex);
    for(int i = bits - 1; i >= 0; i--)
    {
        int res = (hex >> i) & 1;
        if( (i + 1) % 4 == 0)
        {
            printf(" ");
        }
        
        printf("%d",res);
    }
    return 0;
}