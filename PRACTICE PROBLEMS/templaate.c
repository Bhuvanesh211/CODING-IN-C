#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll_no;
    char name[50];
    float marks[10];
    float average;
    char grade;
};

void calculate_average_and_grade(struct Student *student, int num_subjects) 
{
    float sum = 0.0;
    
    for (int i = 0; i < num_subjects; i++)
    {
        sum += student->marks[i];
    }
    
    student->average = sum / num_subjects;

    if (student->average >= 90)
        student->grade = 'A';
    else if (student->average >= 80)
        student->grade = 'B';
    else if (student->average >= 70)
        student->grade = 'C';
    else if (student->average >= 60)
        student->grade = 'D';
    else
        student->grade = 'F';
}

void display_all_students(struct Student *students, int num_students, int num_subjects, char subject_names[][50])
{
    printf("Roll No.\tName\t\t");
    
    for (int i = 0; i < num_subjects; i++)
    {
        printf("%s\t", subject_names[i]);
    }
    
    printf("Average\tGrade\n");
    
    for (int i = 0; i < num_students; i++) 
    {
        printf("%d\t\t%s\t\t", students[i].roll_no, students[i].name);
        for (int j = 0; j < num_subjects; j++)
        {
            printf("%.2f\t", students[i].marks[j]);
        }
        printf("%.2f\t%c\n", students[i].average, students[i].grade);
    }
}

void display_particular_student_by_name(struct Student *students, int num_students, int num_subjects, char subject_names[][50], char *student_name)
{
    for (int i = 0; i < num_students; i++)
    {
        if (strcmp(students[i].name, student_name) == 0)
        {
            printf("Roll No.\tName\t\t");
            
            for (int j = 0; j < num_subjects; j++)
            {
                printf("%s\t", subject_names[j]);
            }
            printf("Average\tGrade\n");
            
            printf("%d\t\t%s\t\t", students[i].roll_no, students[i].name);
            
            for (int k = 0; k < num_subjects; k++) 
            {
                printf("%.2f\t", students[i].marks[k]);
            }
            printf("%.2f\t%c\n", students[i].average, students[i].grade);
            return;
        }
    }
    printf("Student with name %s not found.\n", student_name);
}

void display_particular_student_by_roll_no(struct Student *students, int num_students, int num_subjects, char subject_names[][50], int roll_no)
{
    for (int i = 0; i < num_students; i++)
    {
        if (students[i].roll_no == roll_no)
        {
            printf("Roll No.\tName\t\t");
            for (int j = 0; j < num_subjects; j++) 
            {
                printf("%s\t", subject_names[j]);
            }
            printf("Average\tGrade\n");
            
            printf("%d\t\t%s\t\t", students[i].roll_no, students[i].name);
            for (int k = 0; k < num_subjects; k++)
            {
                printf("%.2f\t", students[i].marks[k]);
            }
            printf("%.2f\t%c\n", students[i].average, students[i].grade);
            return;
        }
    }
    printf("Student with roll no %d not found.\n", roll_no);
}

int main() {
    int num_students, num_subjects;

    printf("Enter no.of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    printf("Enter no.of subjects: ");
    scanf("%d", &num_subjects);

    char subject_names[num_subjects][50];
    for (int i = 0; i < num_subjects; i++) 
    {
        printf("Enter the name of subject %d: ", i + 1);
        scanf("%s", subject_names[i]);
    }

    for (int i = 0; i < num_students; i++)
    {
        printf("----------Enter the student details-------------\n");
        printf("Enter the student Roll no.: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter the student %d name: ", i + 1);
        scanf("%s", students[i].name);
        for (int j = 0; j < num_subjects; j++) 
        {
            printf("Enter %s mark: ", subject_names[j]);
            scanf("%f", &students[i].marks[j]);
        }
        calculate_average_and_grade(&students[i], num_subjects);
    }

    int choice;
    while (1) {
        printf("----Display Menu----\n");
        printf("1. All student details\n");
        printf("2. Particular student details\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            display_all_students(students, num_students, num_subjects, subject_names);
        } 
        else if (choice == 2)
        {
            printf("----Menu for Particular student----\n");
            printf("1. Name.\n");
            printf("2. Roll no.\n");
            printf("Enter your choice: ");
            int sub_choice;
            scanf("%d", &sub_choice);
            if (sub_choice == 1)
            {
                char student_name[50];
                printf("Enter the name of the student: ");
                scanf("%s", student_name);
                display_particular_student_by_name(students, num_students, num_subjects, subject_names, student_name);
            } 
            else if (sub_choice == 2)
            {
                int roll_no;
                printf("Enter the roll no of the student: ");
                scanf("%d", &roll_no);
                display_particular_student_by_roll_no(students, num_students, num_subjects, subject_names, roll_no);
            }
        }

        char cont;
        printf("Do you want to continue to display (Y/y) : ");
        scanf(" %c", &cont);
        if (cont != 'Y' && cont != 'y') {
            break;
        }
    }

    return 0;
}
