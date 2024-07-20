#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    int len = 0;
    int i=0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("LEngth of the string is  : %d",len);
    return 0;
}