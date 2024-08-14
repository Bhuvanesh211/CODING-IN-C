#include<stdio.h>
void count(char *str)
{
    
    int alph=0,digit=0,sp=0;
    for(int i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alph++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            sp++;
        }
    }
printf("Alphabets:%d\n",alph);
printf("digit:%d\n",digit);
printf("spatial characters:%d\n",sp);
}
int main()
{
    char str[50];
    printf("Enter String:");
    scanf("%[^\n]",str);
    count(str);
}