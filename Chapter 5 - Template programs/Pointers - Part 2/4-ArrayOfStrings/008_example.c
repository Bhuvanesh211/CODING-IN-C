#include <stdio.h>

int main()
{
		char *s[3];
		s[0] = "Array";
		s[1] = "of";
		s[2] = "Strings";
#if 0
		printf("%s %s %s\n", s[0], s[1], s[2]);
#else
		for (int i = 0; i < 3; i++)
		{
				for (int j = 0; s[i][j] != '\0'; j++)
				{
						printf("%c", s[i][j]);
				}
				printf(" ");
		}
		printf("\n");
#endif
		//strcpy(s[0] , "vikas");
		//puts(s[0]);
		return 0;
}






















