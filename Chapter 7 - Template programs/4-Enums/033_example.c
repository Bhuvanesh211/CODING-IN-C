#include <stdio.h>
#if 0
typedef enum
{
	e_red = 9,
	e_blue = -4,
	e_green 
} Color;

int main()
{
	Color e_white = 0, e_black;
	printf("e_red %d\n", e_red);
	printf("e_blue %d\n", e_blue);
	printf("e_green %d\n", e_green);
	printf("e_white %d\n", e_white);
	printf("e_black %d\n", e_black);

	return 0;
}
#endif

#if 0
typedef enum
{
	e_red = 9,
	e_blue = 3,
	e_green 
} Color;

int main()
{
	Color e_white = 0, e_black = 15;
	printf("e_red %d\n", e_red);
	printf("e_blue %d\n", e_blue);
	printf("e_green %d\n", e_green);
	printf("e_white %d\n", e_white);
	printf("e_black %d\n", e_black);

	return 0;
}
#endif

#if 0
typedef enum
{
	e_red = 9,
	e_blue = 3,
	e_green 
} Color;

int main()
{
	Color e_white = 0, e_black = 15;
	
	e_white = -123;

	printf("e_red %d\n", e_red);
	printf("e_blue %d\n", e_blue);
	printf("e_green %d\n", e_green);
	printf("e_white %d\n", e_white);
	printf("e_black %d\n", e_black);

	return 0;
}
#endif

#if 1
typedef enum
{
	e_red = 9,
	e_blue = 3,
	e_green 
} Color;

int main()
{
	Color e_white = 0, e_black = 15;
	
	e_white = -123;
	e_green = 123;
	printf("e_red %d\n", e_red);
	printf("e_blue %d\n", e_blue);
	printf("e_green %d\n", e_green);
	printf("e_white %d\n", e_white);
	printf("e_black %d\n", e_black);

	return 0;
}
#endif

