#include <stdio.h>

#define METHOD 1

int main()
{
#if METHOD == 1
	puts("Hello World");
#else
	printf("Hello World");
#endif

	return 0;
}

