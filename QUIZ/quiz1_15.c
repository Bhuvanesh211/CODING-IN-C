#include<stdio.h>
int main()
{
    int num;
    num=0;
    while(num == 0);
    if(num++)
    {
        printf("Yes");//brak will only come in loops and switch case;
    }
    else{
        printf("No");
    }
    return 0;

}