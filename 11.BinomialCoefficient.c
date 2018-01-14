/*
11. Draw the flowchart and write a recursive C function to find the factorial of a number, n!, defined by
fact(n)=1, if n=0. Otherwise fact(n)=n*fact(n-1). Using this function, write a C program to compute
the binomial coefficient nCr. Tabulate the results for different values of n and r with suitable
messages.
*/

#include <stdio.h>

long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * fact(n - 1));
}

void main()
{
    int n, r;
    long res;
    printf("Enter the value of n and r\n");
    scanf("%d%d", &n, &r);
    res = fact(n) / (fact(n - r) * fact(r));
    printf("nCr value is %d\n", res);
    return;
}