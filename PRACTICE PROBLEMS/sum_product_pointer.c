#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two numbers : ");
    scanf("%d%d", &num1, &num2);
    int product, sum;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    product = (*ptr1) * (*ptr2);
    printf("sum = %d,product = %d", sum, product);
    return 0;
}