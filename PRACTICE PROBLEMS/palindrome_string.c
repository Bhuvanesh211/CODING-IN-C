#include <stdio.h>
#include <string.h>
int main()
{
    int low, high;
    char str[10] = "AbbgA";
    low = 0;
    high = strlen(str) - 1;
    int flag;

    while (low < high)
    {
        flag = 0;
        if (str[low] != str[high])
        {
            flag = 1;
        }
        low++;
        high--;
    }
    if (flag == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}