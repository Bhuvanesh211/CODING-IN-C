#if 0
#include <stdio.h>
int foo(int);
int main()
{
	int x, y;
	x = 2;
	y = foo(x);
	printf("y is %d\n", y);
	return 0;
}
int foo(int x)
{
	int ret = 0;
	ret = x + 1;
	return ret;
}

#endif

#if 0
#include <stdio.h>
int foo(int );
int main()
{
	int x, y;
	x = 2;
	y = foo(x);
	printf("y is %d\n", y);
	return 0;
}
int foo(int m)
{
	int ret = 0;
	ret = m + 1;
	return ret;
}

#endif
#if 1
#include <stdio.h>

int foo(int m)
{
	int ret = 0;
	ret = m + 1;
	return ret;
}

int main()
{
	int x, y;
	x = 2;
	y = foo(x);
	printf("y is %d\n", y);
	return 0;
}
#endif
