#include<stdio.h>
void modify(int *ptr1 ,int *ptr2)
{
    *ptr1 += 10;
    *ptr2 +=10;
}

int main()
{
    int ptr1,ptr2;
    printf("Enter the value of pt1 anfd ptr2 : ");
    scanf("%d%d", &ptr1, &ptr2);
    modify(&ptr1,&ptr2);
    printf("After modifying value of ptr1 = %d,ptr2 = %d",ptr1,ptr2);
    return 0;
}