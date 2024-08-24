#if 0
#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d ", *((p + i * col) + j));
		}
		putchar('\n');
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", p[i * col + j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", *p++);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}
#endif


#if 1
#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row * col; i++)
	{
			//printf("%d ", *p++);
			printf("%d ", p[i]);
	}
	putchar(10);
}

int main()
{
		int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

		print_array(2, 3, (int *) a);
		print_array(2, 3,  *a);
		print_array(2, 3,  a[0]);

		return 0;
}
#endif


