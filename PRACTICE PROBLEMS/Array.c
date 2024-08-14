#include <stdio.h>
int i, size;
float sum = 0, avg;


/* Pass by value :
->Actual value will be copied to  formal parameter
->Formal parameter will be used to perform operation
->Formal parameter will be destroyed after the function is executed
->Actual parameter will not be affected by the function
Ex :Program
#include<stdio.h>
int  modify(int x)
{
    n=n+10;
} 
void main() {
int a=10; //actual parameter
printf("Before function call a=%d",a);
modify(a);
printf("After  function call a=%d",a);
}


Pass By Reference
->Actual value will not be copied to formal parameter
->Address of  actual parameter will be copied to formal parameter
->It return multiple values
->it will save stack space 
->it is faster
Ex:program
#include<stdio.h>
int  modify(int *n)
{
    *n=*n+10;
} 
void main() {
int a=10; //actual parameter
printf("Before function call a=%d",a);
modify(&a);
printf("After  function call a=%d",a);
}

Program for why pass by reference is faster than pass by valye
#include<stdio.h>
struct strudent
{
    int id;
    char name[20];
};
void (struct student *s)
{
    printf("Size of structure in  function %zu\n",sizeof(s));//8

}
int main()
{
    struct student s;
    printf("Size of structure in main function %zu\n",sizeof(s));//24
    foo(&s);
}

*/

void read_array(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        printf("Arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
}
void print_array(int arr[], int size)
{

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void find_avg(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
}

void reverse_array(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
}
void max_and_min_element(int arr[], int size, int *max, int *min)
{
    for (i = 0; i < size; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
        
        if (*min > arr[i])
        {
            *min = arr[i];
        }
    }
}
int second_large(int *arr, int size)
{
    int max = arr[0], second_max = arr[1];
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            second_max = max;
            max = arr[i];
        }
        else if (second_max < arr[i] && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    return second_max;
}
int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter Array Element:\n");
    read_array(arr, size);
    printf("Array Elements Are:\n");
    print_array(arr, size);
    printf("\nReverse Array Element:\n");
    reverse_array(arr, size);
    print_array( arr, size);

    int max = arr[0], min = arr[0];

    max_and_min_element(arr, size, &max, &min);
    printf("\nMaximum element in Array :%d\nMinimum element in Array :%d", max, min);

    find_avg(arr, size);
    avg = sum / (float)size;
    printf("\nAverage of Array Elements:%f", avg);
    int second = second_large(arr, size);
    printf("\nSecond Largest Element:%d\n", second);
}