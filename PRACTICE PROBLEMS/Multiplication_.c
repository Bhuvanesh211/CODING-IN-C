// Multiplication of two matrics

#include<stdio.h>
int main()
{
    int r=3,c=3;
    int a[r][c],b[r][c],mul[r][c];
    printf("Enter first array element:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ARR[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter second array element:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ARR[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c;k++)
            {
            
           mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
 printf("Multiplication Two array elements:\n");
 for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}