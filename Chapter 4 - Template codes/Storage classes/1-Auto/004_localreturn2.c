#include <stdio.h>

char *foo()
{
	char ca[12] = "Hello World";

	return ca;
}

int main()
{
	char *ca;

	ca = foo();
	printf("ca is %s\n", ca);

	return 0;
}
