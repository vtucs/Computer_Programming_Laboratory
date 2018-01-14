/*
3.a. Design and develop a flowchart to find the square root of a given number N. Implement
a C program for the same and execute for all possible inputs with appropriate messages.
Note: Don’t use library function sqrt(n). 
*/

#include <stdio.h>

void main()
{
    int s = 1;
    double x, d, n;
    printf("Enter the number\n");
    scanf("%lf", &n);
    if (n > 0)
    {
        while (s * s <= n)
        {
            s++;
        }
        s--;
        for (d = 0.001; d < 1.0; d += 0.001)
        {
            x = s + d;
            if (x * x > n)
            {
                x = x - 0.001;
                break;
            }
        }
        printf("Square Root is %0.3lf\n", x);
    }
    else
    {
        printf("Invalid Number\n");
    }
    return;
}