#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ashu";
    int last=(strlen(str))-1;
    int flag=1;
   for(int i=0;str[i];i++)
   {
       if(str[i]!=str[last])
       {
           flag=0;
           break;
       }
       last--;
   }
    if(flag)
    printf("Palindrome");
    else
    printf(" Not Palindrome");

}
