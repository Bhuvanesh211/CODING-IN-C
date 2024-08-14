#include <stdio.h>

#define FINDSEC(year) year * 365 * 24 * 60 * 60
int main()
{
    int year;

    printf("Enter year:");
    scanf("%d", &year);
    printf("Seconds in a year: %d", FINDSEC(year));
}