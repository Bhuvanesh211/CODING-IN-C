#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "a");
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "r");
	if (fp == NULL)
	{
//			printf("File doesn't exists\n");
			perror("");
			return -1;
	}
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "w");
	if (fp == NULL)
	{
			printf("File doesn't exists\n");
			//perror("");
			return -1;
	}
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "a");
	if (fp == NULL)
	{
			printf("File doesn't exists\n");
			//perror("");
			return -1;
	}
	fclose(fp);
	return 0;
}
#endif

