#include <stdio.h>
int main()
{
    if (sizeof(char *) == sizeof(long long *))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}