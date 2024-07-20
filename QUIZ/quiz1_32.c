#include<stdio.h>
int main()
{
    //printf("%u",sizeof('A'));

    int a = 5;
    ++a;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    --a;
    printf("%d\n",a);
    int b = --a;

    printf("%d %d", a , b);
    return 0;
}