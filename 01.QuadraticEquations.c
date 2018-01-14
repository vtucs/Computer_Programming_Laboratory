/*
1. Design and develop a flowchart or an algorithm that takes three coefficients (a, b, and c) of a
Quadratic equation (ax^2+bx+c=0) as input and compute all possible roots. Implement a C
program for the developed flowchart/algorithm and execute the same to output the possible
roots for a given set of coefficients with appropriate messages. 
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, disc, x, y;
    printf("Enter the co-efficients a, b and c\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0 && b == 0)
    {
        printf("Invalid Entry\n");
    }
    else if (a == 0)
    {
        printf("Linear Equation\n");
        x = -c / b;
        printf("Root is %0.3f\n", x);
    }
    else
    {
        disc = (b * b) - (4 * a * c);
        if (disc == 0)
        {
            printf("Roots are real and equal\n");
            y = x = -b / (2 * a);
            printf("Roots are %0.3f and %0.3f", x, y);
        }
        else if (disc > 0)
        {
            printf("Roots are real and distinct\n");
            x = (-b + sqrt(disc)) / (2 * a);
            y = (-b - sqrt(disc)) / (2 * a);
            printf("Roots are %0.3f and %0.3f", x, y);
        }
        else
        {
            printf("Roots are imaginary\n");
            x = -b / (2 * a);
            y = sqrt(fabs(disc)) / (2 * a);
            printf("Roots are %0.3f + i %0.3f and %0.3f - i %0.3f", x, y, x, y);
        }
    }
    return;
}