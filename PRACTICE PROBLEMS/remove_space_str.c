// Remove blank spaces in a string
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("String without spaces: ");
    puts(str);
    return 0;
}
