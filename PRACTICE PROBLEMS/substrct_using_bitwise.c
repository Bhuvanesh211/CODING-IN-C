#include<stdio.h>
int main()
{
     int a=10,b=5;
     int carry;
     while (b)  
     {
        carry=(~a)&b;  //carry will store the bitwise AND
        a=a^b;       //b will store the bitwise OR of X and Y
        b=carry<<1;  //shift the Carry one position to left so that it can hold
     }
     printf("Substrction is %d",a);
     
}