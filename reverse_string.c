#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s", str);
    int i, j, length;
    length = strlen(str);
    for (i = 0, j = length - 1; i <= j; i++, j--)
    {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    printf("Reversed string : %s", str);
    return 0;
}