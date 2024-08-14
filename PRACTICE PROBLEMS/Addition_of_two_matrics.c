// addition of two matrics

#include<stdio.h>
int main()
{
    int r=3,c=3;
    int a[r][c],b[r][c],sum[r][c];
    printf("Enter first array element:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ARR[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter second array element:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ARR[%d][%d] ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
 printf("Addition Two array elements:");
 for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}