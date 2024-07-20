#include <stdio.h>

int main()
{
    int n;

    // Input validation for odd number
    do
    {
        printf("Enter an odd number: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("The number is not odd. Please try again.\n");
        }
    } while (n % 2 == 0);

    // Calculate and print the pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Calculate the minimum distance to any edge
            int min = i < j ? i : j;
            min = min < n - i - 1 ? min : n - i - 1;
            min = min < n - j - 1 ? min : n - j - 1;

            // Calculate the value to print
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
