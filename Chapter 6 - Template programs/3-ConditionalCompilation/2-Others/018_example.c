#include <stdio.h>
#undef METHOD1
int main()
{

#ifndef METHOD1
	puts("Hello World");
#else
	printf("Hello World");
#endif

#define METHOD1

#ifndef METHOD1
	puts("Vikas");
#else
	printf("EMERTXE");
#endif
	
	
	return 0;
}

