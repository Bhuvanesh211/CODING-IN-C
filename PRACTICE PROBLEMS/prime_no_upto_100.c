#include<stdio.h>

int main()
{
    int count=0,i,j;

     for ( i = 1; i < 100; i++)
     {
        count=0;
        for (j = 2; j < i; j++)
        {
           if(i%j==0)
           {
            count=1;
            break;
           }
        }
        if(!count)
        {
            printf("%d ",i);
        }
     }
}