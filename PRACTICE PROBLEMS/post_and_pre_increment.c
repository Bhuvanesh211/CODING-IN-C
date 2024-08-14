#include <stdio.h>
int main()
{
# if 0

    int x = 10;
    int b = 10;
    // pre-increment
    // 1.first increment
    // 2.Then assign value
    int y = ++x;
    // Post-increment

    // 1.Then assign value
    // 2.first increment
    int z = b++;
    printf("Value of x=%d and y=%d for pre-increment\n", x, y);
    printf("Value of b=%d and z=%d for post-increment\n", b, z);
#endif
#if 1
int x=0;

if (x++)
{
    printf("If Block X value is=%d",x);
    }
    else
    {
        printf("Else Block X value is=%d",x);
    }


#endif
}