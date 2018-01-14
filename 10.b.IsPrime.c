/*
10.b. Design and develop a C function isprime(num) that accepts an integer argument and
returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this
function to generate prime numbers between the given range.
*/

#include <stdio.h>
#include <math.h>

int isprime(int num)
{
    int i;
    if (num == 0 || num == 1)
    {
        return 0;
    }
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int x, y, i, flag = 0;
    printf("Enter a range\n");
    scanf("%d%d", &x, &y);
    printf("The prime numbers are\n");
    for (i = x; i <= y; i++)
    {
        if (isprime(i))
        {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("There are no prime numbers in this range\n");
    }
    return;
}