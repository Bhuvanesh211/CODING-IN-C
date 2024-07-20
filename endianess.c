#include <stdio.h>
int main()
{
    unsigned int x = 1;
    char *cptr;
    cptr = (char *) & x;

    if (*cptr)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return 0;
}
