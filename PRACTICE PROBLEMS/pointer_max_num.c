#include <stdio.h>
int main()
{
    int a, b, largest;
    printf("Enter the value a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int *ptr1 = &a;
    int *ptr2 = &b;

    (*ptr1 > *ptr2) ? (largest = *ptr1) : (largest = *ptr2);
    printf("Largest is %d\n", largest);
    printf("%d", ptr1);
    printf("\n");
    printf("%d", ptr2);
    return 0;
}