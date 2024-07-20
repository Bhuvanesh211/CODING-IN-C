#include<stdio.h>
int main()
{
    int num,val,a,b,c,mask;
    num = 16;
    val =15;
    a = 2;
    b= 3;
    c = b -a +1;
    mask = ((1 << a) -1) << (c);
    val = val & ~mask;
    printf("%d", val);
    printf("\n");
    num = (num >>  c) & mask;
    printf("%d\n", num);
    //num = num << c;
    printf("%d\n", num);
    int res = val | num;
    printf("%d",res);
    return 0;
}