#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter the string1 and string2 : ");
    scanf("%s%s", str1, str2);
    int len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("Length of string1 %d and length of string2 is %d\n", len1, len2);
    char cpystr1[20], cpystr2[20];
    strcpy(cpystr1, str1);
    strcpy(cpystr2, str2);
    printf("Copied string1 is %s and string2 is %s\n", cpystr1, cpystr2);
    int res = strcmp(str1, str2);
    printf("Result %d\n", res);
    // char cat[20];
    strcat(str1, str2);
    printf("Cantatition of str1 and str2 : %s\n", str1);
    strupr(str1);
    strlwr(str2);
    printf("Strings str1 %s and str2 %s\n", str1, str2);
    return 0;
}