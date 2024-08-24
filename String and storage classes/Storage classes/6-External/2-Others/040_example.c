#include <stdio.h>

int main()
{
		extern int x;
		printf("x %c\n", x);
		return 0;
}

int x = 0x31;
