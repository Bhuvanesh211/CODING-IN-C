#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[10];

	puts("Enter the string");
	fgets(str, 10, stdin);
//	puts(str);
	fputs(str, stdout);

	return 0;
}
