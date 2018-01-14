/*
10.a. Design and develop a C function RightShift(x ,n) that takes two integers x and n as
input and returns value of the integer x rotated to the right by n positions. Assume the
integers are unsigned. Write a C program that invokes this function with different values
for x and n and tabulate the results with suitable headings.
*/

#include <stdio.h>
#include <math.h>

unsigned int RightShift(unsigned int x, unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x % 2 == 0)
        {
            x = x >> 1;
        }
        else
        {
            x = x >> 1;
            x = x + pow(2, sizeof(int) * 8 - 1);
            //if integer size is 2 byte on your machine, you can simply add 32768.
        }
    }
    return x;
}

void main()
{
    unsigned int x, n, value;
    printf("Enter the number and right rotation value\n");
    scanf("%u%u", &x, &n);
    value = RightShift(x, n);
    printf("Rotated Value is %u", value);
    return;
}