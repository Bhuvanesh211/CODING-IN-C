#include<stdio.h>
int main()
{
    int i,j;
    i=j=0;
    for(; i< 2, j<5;)
    {
        printf("%d %d ",i++,j++);
    }
    return 0;
}