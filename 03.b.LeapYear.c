/*
3.b. Design and develop a C program to read a year as an input and find whether it is leap year or
not. Also consider end of the centuries.
*/

#include <stdio.h>

void main()
{
    int year;
    printf("Enter a valid year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not leap year\n", year);
    }
    return;
}