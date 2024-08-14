#include <stdio.h>

int main()

{

    int num, num2 = 0;

    printf("Enter number: ");

    scanf("%d", &num);

    if (num == 0)

        num2 = 1;

    while (num > 0)

    {

        int rem = num % 10;

        if (rem == 0)
        {

            rem = 1;
        }

        num2 = num2 * 10 + rem;
        num = num / 10;
    }
    // this num2 is a reversed no after 0 to 1 conversion
    printf("%d\n", num2);

    num = 0;

    while (num2 > 0)
    {

        int r = num2 % 10;

        num = num * 10 + r;

        num2 /= 10;
    }

    printf("Converted number is: %d", num);

    return 0;
}