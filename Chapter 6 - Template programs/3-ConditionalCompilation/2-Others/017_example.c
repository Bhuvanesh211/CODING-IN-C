#include <stdio.h>
#define METHOD2
int main()
{
#ifdef METHOD1
	puts("Hello World");
#else
	printf("Hello World");
#endif

	return 0;
}

