#include <stdio.h>
#include <string.h>
void reverse(char *str, int size, int i)
{
    if (size / 2 > i)
    {
        int temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
        reverse(str, size, ++i);
    }
}
int main()
{

    char str[100] = "Hello World";
    int size = strlen(str);

    reverse(str, size, 0);
    printf("%s", str);

}