//Print 1 to 100 series using recursion

#include<stdio.h>
void print(int limit,int i)
{

    if(i<=limit)
    {
        printf("%d\t",i);
        print(limit,++i);
     
    }
}
int main()
{
    
    print(100,1);
}


//Print 100 to 1 series using recursion

#include<stdio.h>
void print(int limit,int i)
{

    if(i>=limit)
    {
        printf("%d\t",i);
        print(limit,--i);
     
    }
}
int main()
{
    print(1,100);
}