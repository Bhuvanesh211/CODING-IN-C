//Replace lowercase letters with uppercase & vice versa in a string
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    printf("Modified string: ");
    puts(str);
    return 0;
}