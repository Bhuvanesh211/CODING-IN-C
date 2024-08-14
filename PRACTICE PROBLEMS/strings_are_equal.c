#include<stdio.h>
#include<string.h>

int almostequal(char *str1,char *str2)
{
  int size = strlen(str1);
    size--;
    for(int i=0;i < size;i++,size--)
    {
        char ch = str1[i];
        str1[i] = str1[size];
        str1[size] = ch;
        
        
        if(!strcmp(str1,str2))
             return 1;
         
        ch = str1[i];
        str1[i] = str1[size];
        str1[size] = ch;
    }
    return 0;
    

}
int main()
{
    char str1[10]="bank";
    char str2[10]="kanb";
    printf("%s",almostequal(str1,str2)?"true":"false");
}