#include <stdio.h>

#if 0
int main()
{
	printf("Program: \"%s\" ", __FILE__);
	printf("was compiled on %s at %s. ", __DATE__, __TIME__);
	printf("This print is from Function: \"%s\"", __func__);
	printf("at line %d\n",  __LINE__);
	return 0;
}
#endif

#if 1
void foo()
{
	printf("This print is from Function: \"%s\"", __func__);
	printf("at line %d\n",  __LINE__);
}
int main()
{
	printf("Program: \"%s\" ", __FILE__);
	printf("was compiled on %s at %s. ", __DATE__, __TIME__);
	foo();
	return 0;
}
#endif










