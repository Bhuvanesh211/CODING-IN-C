#include <stdio.h>
#define SIZEOF(x) ((char *)(&x + 1)) - ((char *)&x)
int main()
{
    int i;
    char ch;
    float fl;
    double d;
    long double ld;

    int op;
    printf("1.int\n2.char\n3.float\n4.double\n5.long double\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Sizeof int:%d bytes", SIZEOF(i));
        break;
    case 2:
        printf("Sizeof char:%d bytes", SIZEOF(ch));
        break;
    case 3:
        printf("Sizeof float:%d bytes", SIZEOF(fl));
        break;
    case 4:
        printf("Sizeof double:%d bytes", SIZEOF(d));
        break;
    case 5:
        printf("Sizeof long doble:%d bytes", SIZEOF(ld));
        break;

    default:
    printf("Invalid Option!");
       
    }
}