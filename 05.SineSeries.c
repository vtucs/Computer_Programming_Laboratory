/*
5. Draw the flowchart and Write a C Program to compute Sin(x) using Taylor series approximation
given by Sin(x) = x - (x3/3!) + (x5/5!) - (x7/7!) + …….
Compare your result with the built- in Library function. Print both the results with appropriate
messages. 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.142

void main()
{
    int i, degree;
    float rad, sum = 0, term, numr, denr;
    printf("Enter the degree value\n");
    scanf("%d", &degree);
    rad = degree * PI / 180;
    numr = rad;
    denr = 1;
    i = 2;
    do
    {
        term = numr / denr;
        numr = -numr * rad * rad;
        denr = denr * i * (i + 1);
        sum = sum + term;
        i = i + 2;
    } while (fabs(term) >= 0.00001);
    printf("Calculated sine value of %d is %0.3f\n", degree, sum);
    printf("Using built-in function sine value of %d is %0.3f", degree, sin(rad));
    return;
}