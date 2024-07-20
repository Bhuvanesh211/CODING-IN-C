#include<stdio.h>
int main()
{
    int n = 5;
    int *ptr = &n;
    printf("%d\n",(*ptr + 3));
    printf("%d\n",(*ptr - 3));
    return 0;
}