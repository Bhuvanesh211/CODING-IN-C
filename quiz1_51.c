int main()

{

int array1 = {1, 2, 3, 4, 5};

int array2[6] = {1, 2, 3}, i = 0;

printf("%u\n", sizeof(array1));

printf("%u\n", sizeof(array2));

for (; i < 5; i++)

{

    printf("%d ", array1[i]);
}

for (i = 0; i < 5;)

{

    array1 = array2[i];
}

return 0;
}