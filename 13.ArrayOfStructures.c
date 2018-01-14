/*
13. Write a C program to maintain a record of n student details using an array of structures with
four fields (Roll number, Name, Marks, and Grade). Assume appropriate data type for each
field. Print the marks of the student, given the student name as input. 
*/

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno, marks;
    char name[20], grade;
};

void main()
{
    int i, n, found = 0;
    struct student s[10];
    char sname[20];
    printf("Enter the number of students\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of %d student\n", i + 1);
        printf("Enter the roll number\n");
        scanf("%d", &s[i].rollno);
        printf("Enter the name w/o spaces\n");
        scanf("%s", s[i].name);
        printf("Enter the marks\n");
        scanf("%d", &s[i].marks);
        printf("Enter the grade\n");
        scanf(" %c", &s[i].grade);
        printf("\n");
    }
    printf("Students details are\n");
    printf("Roll no\tName\tMarks\tGrade\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%c\n", s[i].rollno, s[i].name, s[i].marks, s[i].grade);
    }
    printf("Enter the student name to print marks\n");
    scanf("%s", sname);
    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, sname) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Marks of the student are %d\n", s[i].marks);
    }
    else
    {
        printf("Student not found\n");
    }
    return;
}