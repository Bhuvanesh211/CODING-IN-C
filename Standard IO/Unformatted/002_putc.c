#if 0
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
int main()
{
	int ch;

	for ( ; (ch = getc(stdin)) != EOF; )
	{
		putc(toupper(ch), stdout);
	}

	puts("EOF Received");

	return 0;
}
#endif

#if 1
#include <stdio.h>
#include <unistd.h>
int main()
{
	while (1)
	{
		putc('A', stderr);
		sleep(1);
	}
	return 0;
}

#endif



















