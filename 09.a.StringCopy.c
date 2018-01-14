/*
9.a. Write and execute a C program that
Implements string copy operation STRCOPY(str1,str2) that copies a string str1 to another string str2 without using library function.
*/

#include <stdio.h>

void STRCOPY(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}

void main()
{
    char str1[20], str2[20];
    printf("Enter source string\n");
    gets(str1);
    STRCOPY(str1, str2);
    printf("Destination string is\n");
    puts(str2);
    return;
}