#include <stdio.h>

int main()
{
	int i = 10;
	register int *j = &i;

	printf("*j %d\n", *j);

	return 0;
}
