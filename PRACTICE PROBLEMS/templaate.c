#include <stdio.h>

void print_menu(char *menu[], int size);

int main() {
    char *menu[] = {"File", "Edit", "View", "Insert", "Help"};
    int size = sizeof(menu) / sizeof(menu[0]);
    int option;
    //printf("%d\n",size);
    print_menu(menu,size);
    
    printf("Select your option: ");
    scanf("%d", &option);
    
    if (option >= 1 && option <= size) 
    {
        printf("You have selected %s Menu\n", menu[option - 1]);
    }
    else
    {
        printf("Invalid option selected\n");
    }
    
    return 0;
}

void print_menu(char *menu[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d. %s\n", i + 1, menu[i]);
    }
}
