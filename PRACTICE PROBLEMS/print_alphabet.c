#include <stdio.h>
int main()
{
    char ch = 'A';
    char *ptr = &ch;
    for (; *ptr <= 'Z'; (*ptr)++)
    {
        printf("%c ", *ptr);
    }
    return 0;
}