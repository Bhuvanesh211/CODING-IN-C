#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    // Read the first string from the user
    printf("Enter the string1: ");
    gets(str1);

    // Read the second string from the user
    printf("Enter the string2: ");
    gets(str2);

    // Compare the strings character by character
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            break;
        }
        i++;
    }

    // Check the result of the comparison
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Entered Strings are equal\n");
    }
    else
    {
        printf("Entered Strings are not equal\n");
    }

    return 0;
}
