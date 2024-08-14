#include <stdio.h>
int main()
{
    int ch;
    printf("Enter choice:");
    scanf("%d", &ch);
    if (ch > 12 || ch <= 0)
    {
        printf("Invalid input..");
        return 0;
    }
    if (ch == 1 || ch == 3 || ch == 5 || ch == 7 || ch == 8 || ch == 10 || ch == 12)
    {
        printf("The no of days in the month %d 31", ch);
    }
    else if (ch == 2)
    {
        printf("The no of days in the february 28 and 29.");
    }
    else
    {
        printf("The no of days in the month %d 30", ch);
    }
}