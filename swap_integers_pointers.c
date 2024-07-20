#include <stdio.h>
void swap_integers(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int num1, num2;
    printf("Enter two nubrs : ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping, num1 = %d and num2 = %d\n", num1, num2);
    swap_integers(&num1,&num2);
    printf("After swapping, num1 = %d and num2 = %d ", num1, num2);
    return 0;
}