
#include <stdio.h>
#if 0
#define PRINT(x)   x##_val
int main()
{
		int int1_val = 100;
		float float1_val = 20.5;

		printf("num = %d\n", PRINT(int1));
		printf("num2 = %f\n", PRINT(float1));
		return 0;
}
#endif

#if 0
#define SUM(x, y) 	x + y
int main()
{
		int i1 = 10, i2 = 20;
		float f1 = 5.5, f2 = 6.5;

		printf("num = %d\n", SUM(i1, i2));
		printf("num2 = %f\n", SUM(f1, f2));
		return 0;
}
#endif

#if 0
#define SUM(x, y) 	*x + *y
int main()
{
		int i1 = 10, i2 = 20;
		float f1 = 5.5, f2 = 6.5;

		printf("num = %d\n", SUM(&i1, &i2));
		printf("num2 = %f\n", SUM(&f1, &f2));
		return 0;
}
#endif


















