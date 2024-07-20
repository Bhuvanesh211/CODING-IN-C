#include <stdio.h>
int main()
{
    int i;
    for (i = -1; i < sizeof(i); i++)
    {
        printf("%d", i);
    }
    return 0;
}