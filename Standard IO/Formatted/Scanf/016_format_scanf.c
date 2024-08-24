#include <stdio.h>
#if 0
int main()
{
    int num;
    char ch;

    scanf("%d %c",&num,&ch);
    printf("num:%d ch:%c\n",num,ch);
    return 0;
}
#endif
#if 0
int main()
{
    int num1,num2;
    char ch;

    scanf("%d %c %d",&num1,&ch,&num2);
    printf("num1:%d ch:%c num2:%d\n",num1,ch,num2);
    return 0;
}
#endif
#if 0
int main()
{
    int num1,num2;
    char ch;

    scanf("%d%c%d",&num1,&ch,&num2);
    printf("num1:%d ch:%c num2:%d\n",num1,ch,num2);
    return 0;
}
#endif
#if 0
int main()
{
    int num;
    char ch;

    scanf("%d%c",&num,&ch);
    printf("num:%d ch:%c\n",num,ch);
    return 0;
}
#endif
#if 0
int main()
{
    int num;
    char ch;

    scanf("%d\n%c",&num,&ch);
    printf("num:%d ch:%c\n",num,ch);
    return 0;
}
#endif
#if 0
int main()
{
    int num;
    char ch;

    scanf("%d %c",&num,&ch);
    printf("num:%d ch:%c\n",num,ch);
    return 0;
}
#endif
#if 0
int main()
{
    int num;
    char ch;

    scanf("%da%c",&num,&ch);
    printf("num:%d ch:%c\n",num,ch);
    return 0;
}
#endif
#if 0
int main()
{
    int num, ret;
    char ch;

    ret = scanf("%da%c",&num,&ch);
    printf("num:%d ch:%c ret:%d\n",num,ch,ret);
    return 0;
}
#endif
#if 0
int main()
{
    int num, ret;
    char ch = 'X';

    ret = scanf("%da%c",&num,&ch);
    printf("num:%d ch:%c ret:%d\n",num,ch,ret);
    return 0;
}
#endif

#if 0
int main()
{
    int num, ret;
    char ch = 'X';

    ret = scanf("%dabc%c",&num,&ch);
    printf("num:%d ch:%c ret:%d\n",num,ch,ret);
    return 0;
}
#endif

#if 1
int main()
{
    int hour,min,sec;
    int day,month,year;
    if (scanf("%d:%d:%d",&hour,&min,&sec) != 3)
        printf("Invalid time format1\n");

    if (scanf("%d/%d/%d",&day,&month,&year) != 3)
        printf("Invalid date format2\n");
    return 0;
}
#endif

#if 0
int main()
{
	int hours;
	int mins;
	int secs;

	printf("Please enter Time as HH:MM:SS\n");

	scanf("%d%*c%d%*c%d", &hours, &mins, &secs);
	printf("%d:%d:%d\n", hours, mins, secs);

	return 0;
}
#endif
#if 0
int main()
{
    int sum = 0;
    int num1, num2, num3;

    printf("Enter the numbers to be added [Eg. 1 + 2 + 3]: ");
    scanf("%d%*c%d%*c%d", &num1, &num2, &num3); /* Skips a char */

    sum = num1 + num2 + num3;
    printf("Sum = %d\n", sum);

    return 0;
}
#endif
