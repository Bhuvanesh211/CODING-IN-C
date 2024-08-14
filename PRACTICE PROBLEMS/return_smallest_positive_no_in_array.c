#include <stdio.h>
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    int arr[size],flag = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int temp;
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 1; i <= max; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (i == arr[j])
            {        
               flag = 1;
               break;
            }
        }
        if(flag == 0)
        {
          printf("The smallest positive integer not present in the array:%d", i);
          break;
        }

        flag = 0;
    }
}