#include<stdio.h>
#pragma pack(4)

struct student
{
    char ch1;
    int i;
    char ch2;
}s1;

int main()
{
    printf("%zu\n",sizeof(s1));
    return 0;
}

