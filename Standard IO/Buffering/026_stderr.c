#include <stdio.h>
#include <unistd.h>

int main()
{
	while (1)
	{
		fprintf(stdout, "Hello");
		fprintf(stderr, "World");
		usleep(4000);
	}

	return 0;
}
