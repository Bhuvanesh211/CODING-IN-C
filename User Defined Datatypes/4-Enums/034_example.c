#include <stdio.h>
#if 0
int main()
{
		typedef enum
		{
				red,
				blue
		} Color;


		int blue;

		printf("%d\n", blue);

		return 0;
}
#endif

#if 1
typedef enum
{
		red,
		blue
} Color;

int main()
{
		int blue;

		printf("%d\n", blue);

		return 0;
}
#endif
