#if 0
#include <stdio.h>

int main()
{
	int num1;
	char ch;
	float num2;
	char string[10];

	scanf("%d %c %f %s", &num1 , &ch, &num2, string);
	printf("%d %c %f %s\n", num1 , ch, num2, string);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int num1, ret;
	char ch;
	float num2;
	char string[10];

	ret = scanf("%d %c %f %s", &num1 , &ch, &num2, string);
	printf("%d %c %f %s\n", num1 , ch, num2, string);
	printf("scanf() return %d\n", ret);
	return 0;
}
#endif
