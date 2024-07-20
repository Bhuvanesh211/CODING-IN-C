#include <stdio.h>
int main()
{
    int i = 0;
    for (;--i;)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}