#include <stdio.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    int flag = 0;
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] >= 97 || str1[i] <= 122)
            {
                str1[i] = str1[i] - 32;
            }
            if (str2[i] >= 97 || str2[i] <= 122)
            {
                str2[i] = str2[i] - 32;
            }
            int check = str1[i] - str2[i];
            if (check > 0)
            {
                flag = 1;
            }
            if (check < 0)
            {
                flag = 2;
            }
            break;
        }
    }
    if (flag == 0)
    {
        printf("Strings are Same\n");
    }
    else if (flag == 1)
    {
        printf("Str1 is  greater than Str2\n");
    }
    else
    {
        printf("Str2 is  greater than Str1\n");
    }
}