#include<stdio.h>
struct Student
{
   
    int roll_no;
    char name[50];
    float cgpa;
    char address[50];
};

int main()
{
    struct Student s1 = {25,"Bhuvanesh",9.8,"Banglore"};
    printf("Structure 1 details roll_ no = %d, name = %s,cgpa= %f, address = %s",s1.roll_no,s1.name,s1.cgpa,s1.address);
    return 0;

}
