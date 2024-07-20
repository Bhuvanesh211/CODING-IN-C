#include <stdio.h>

int main()
{
    int num; // Size of the pattern
    printf("Enter the number : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || i == num - 1 || j == 0 || j == num - 1)
            {
                printf("%d ",num);
            }
            else if (i == 1 || i == num - 2 || j == 1 || j == num - 2)
            {
                printf("%d ",(num- 1));
            }
            else
            {
                printf("%d ",(num - 2));
            }
        }
        printf("\n");
    }

    return 0;
}
