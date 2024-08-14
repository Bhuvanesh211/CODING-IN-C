#if 0
#include <stdio.h>
int main()
{
    int size = 0;
    char str[20] = "Ashutosh";
    while (str[size++])
        ;
    printf("%d\n", size);
    size = size - 1;
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            str[i] = str[i] ^ str[size - i - 1];
            str[size - i - 1] = str[size - i - 1] ^ str[i];
            str[i] = str[i] ^ str[size - i - 1];

           
        }
    }
    printf("%s", str);
}
#endif
#if 1

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Ashutosh";
    int size = strlen(str);
    int start = 0;
    int last = size - 1;
    while (start < last)
    {
        str[start] = str[start] ^ str[last];
        str[last] = str[start] ^ str[last];
        str[start] = str[start] ^ str[last];
        ++start;
        --last;
    }
    printf("%s\n", str);
    return 0;
}
#endif