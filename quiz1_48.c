#include <stdio.h>
int main()
{
    int option = 25;
    switch (option)
    {
    case 20:
        printf("10\n");
        break;
    case 10 + 15:
        printf("20\n");
        break;
    default:
        printf("Try again");
        break;
    }
    return 0;
}