/*
4. Design and develop an algorithm to evaluate polynomial f(x) = a4x^4 + a3x^3 + a2x^2 + a1^x + a0,
for a given value of x and its coefficients using Horner’s method. Implement a C program
for the same and execute the program with different set of values of coefficients and x.
*/

#include <stdio.h>

void main()
{
    int n, x, a[10], i, sum = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    printf("Enter n+1 coefficients\n");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter value of x\n");
    scanf("%d", &x);
    sum = a[n];
    for (i = n - 1; i >= 0; i--)
    {
        sum = (sum * x) + a[i];
    }
    printf("After evaluation the result is %d\n", sum);
    return;
}