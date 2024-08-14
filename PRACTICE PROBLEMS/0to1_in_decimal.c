#include <stdio.h>
int main()
{
    int num, res = 0, place = 1, digit;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit == 0)
        {
            digit = 1;
        }

        res = res + digit * place;
        place = place * 10;
        num = num / 10;
    }
    printf("%d\n", res);
}