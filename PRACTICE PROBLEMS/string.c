// Online C compiler to run C program online
#include <stdio.h>
int size;
int find_length_string(char *str)
{

    while (str[size++] != '\0');
    return size;
}

void reverse_string(char *str)
{
    int len = size - 2, i = 0;
    while (i < len)
    {
        int temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
}
void concat_string(char *s1, char *s2)
{
    int i = 0, j = 0;
    while (s1[i++] != '\0')
        ;
    i = i - 1;
    while (s2[j])
    {
        s1[i++] = s2[j++];
    }
}
int string_equal(char *s1, char *s2)
{
    int s1_len = 0, s2_len = 0;
    while (s1[s1_len++] != '\0')
        ;
    while (s2[s2_len++] != '\0')
        ;
    s1_len = s1_len - 1;
    s2_len = s2_len - 1;
    if (s1_len != s2_len)
        return 0;
    else if (s1_len == s2_len)
        for (int i = s1_len; s1[s1_len], s2[s1_len]; s1_len--)
        {
            if (s1[s1_len] == s2[s2_len])
            {
                break;
            }
        }
    return 1;
}
void copy_string(char *str1, char *str2)
{
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        str2[i] = str1[i];
    }
}
int main()
{
    // Write C code here
    char str[100];
    char s1[10] = "Ashu", s2[10] = "Tosh";
    printf("Enter string:");
    scanf("%s", str);
    printf("Length of the String including Null Character is:%d\n", find_length_string(str));
    reverse_string(str);
    printf("Reverse the String:%s\n", str);

    int res = string_equal(s1, s2);
    if (res == 1)
        printf("Both Strings are equal Size\n");
    else if (res == 0)
        printf("Both Strings are not same\n");
    concat_string(s1, s2);
    printf("Concatenate Both string:%s\n", s1);
    char str1[20] = "Ashutosh Zende", str2[20];
    copy_string(str1, str2);
    printf("Copy one str1 to str2:%s\n", str2);

    return 0;
}