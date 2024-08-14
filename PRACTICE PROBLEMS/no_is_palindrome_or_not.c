#include <stdio.h>
int check(int num)
{
    int  rev = 0;
    while (num)
    {
        
        rev = (rev * 10) + num % 10;;
        num /= 10;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter No:");
    scanf("%d", &num);

    if (check(num) == num)
    {
        printf("It is Palindrome.\n");
    }
    else
    {
        printf("It is Not Palindrome.\n");
    }
}