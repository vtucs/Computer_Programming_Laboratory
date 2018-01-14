/*
12. Given two university information files “studentname.txt” and “usn.txt” that contains students
Name and USN respectively. Write a C program to create a new file called “output.txt” and
copy the content of files “studentname.txt” and “usn.txt” into output file.
Display the contents of output file “output.txt” on to the screen. 
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp1, *fp2, *fp3;
    char usn[20], name[20];
    fp1 = fopen("studentname.txt", "r");
    fp2 = fopen("usn.txt", "r");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File not found\n");
        exit(0);
    }
    fp3 = fopen("output.txt", "w");
    while (!feof(fp1) && !feof(fp2))
    {
        fscanf(fp1, "%s\n", name);
        fscanf(fp2, "%s\n", usn);
        fprintf(fp3, "%-15s%10s\n", name, usn);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp3 = fopen("output.txt", "r");
    printf("Name\t\t\tUSN\n");
    while (!feof(fp3))
    {
        fscanf(fp3, "%s", name);
        fscanf(fp3, "%s\n", usn);
        printf("%-15s%10s\n", name, usn);
    }
    fclose(fp3);
    return;
}