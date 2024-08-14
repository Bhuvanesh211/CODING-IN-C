#include<stdio.h>
int main()
{
     int a[3][3]={1,2,3,4,5,5,5,6,5};
     int n=5;
     int flag=0;
     printf("Element %d is present at position :\n",n);
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j]==n)
            {
                printf("[%d,%d] ",i,j);
                flag=1;
            }
           
        }
        
     }
     if(flag==0)
     {
        printf("Element not Found");
     }
     
}