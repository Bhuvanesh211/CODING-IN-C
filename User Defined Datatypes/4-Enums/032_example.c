#include <stdio.h>
#if 1
enum boo
{
	e_false=0,
	e_false
};
/*enum bool
{
	e_false,
	e_true
};*/


int main()
{
	printf("%d\n", e_false);
	//printf("%d\n", e_true);

	return 0;
}
#endif
#if 0
enum bool
{
	e_false = 10,
	e_true = 12
};

int main()
{
	printf("%d\n", e_false);
	printf("%d\n", e_true);

	return 0;
}
#endif

#if 0
enum bool
{
	e_false = 10,
	e_true = 10
};

int main()
{
	printf("%d\n", e_false);
	printf("%d\n", e_true);

	return 0;
}
#endif

#if 0
enum bool
{
	e_false = 10,
	e_true 
};

int main()
{
	printf("%d\n", e_false);
	printf("%d\n", e_true);

	return 0;
}
#endif
