#include <stdio.h>

int main()
{
    char source[] = "A2B";
    char destination[100];

    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    // Add the null terminator to the destination string
    destination[i] = '\0';

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}