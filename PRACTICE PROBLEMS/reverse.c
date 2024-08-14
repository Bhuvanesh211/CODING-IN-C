// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
char str[100]="Ashutosh";
printf("%s",str);

int len =strlen(str);

 int i = 0;
 len=len-1;
    while (i <len)
    {
        int temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
printf("%s",str);
    return 0;
}