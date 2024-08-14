#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="Prathmesh";
    int key=4;
    int size=strlen(str);
    //size=size-1;
    printf("%d",size);
    if(key==0)
    {
        printf("Invalid value of key\n");
    }
    for (int i = 1; i <= size; i++)
    {
        if(i%key==0)
        {
            printf(" %c",str[i-1]);
        }
    }
    


}