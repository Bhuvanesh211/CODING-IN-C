#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter a string : ");
    fgets(str,30,stdin);
    int len = strlen(str);
    for(int i = 0;i < (len / 2); i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string is :%s",str);
    return 0;
}