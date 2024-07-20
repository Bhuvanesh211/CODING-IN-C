#include <stdio.h>
int modify(int num);
int main()
{
    int num = 10;
    num = modify(num);
    //num2 = modify(num2);
    printf("After modifying num %d", num);
    return 0;
}
int modify(int num)
{
    num += 10;
    return num ;
}