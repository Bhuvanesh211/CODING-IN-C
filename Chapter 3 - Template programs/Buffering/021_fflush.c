#include <stdio.h>
#include <unistd.h>

int main()
{
	while (1)
	{
		printf("Hello");
		//fflush(stdout);
		usleep(1000);
	}

	return 0;
}
