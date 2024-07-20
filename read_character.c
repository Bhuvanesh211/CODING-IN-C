#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the input : ");
    scanf("%c", &ch);
    char *ptr = &ch;
    printf("Character entered is %c", *ptr);
    return 0;
}