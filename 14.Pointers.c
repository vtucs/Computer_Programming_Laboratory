/*
14. Write a C program using pointers to compute the sum, mean and standard deviation of all elements
stored in an array of n real numbers. 
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float a[10], *ptr, mean, std, sum = 0, sumstd = 0;
    int n, i;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + (*ptr);
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sumstd = sumstd + pow(((*ptr) - mean), 2);
        ptr++;
    }
    std = sqrt(sumstd / n);
    printf("Sum is %0.3f\n", sum);
    printf("Mean is %0.3f\n", mean);
    printf("Standard deviaton is %0.3f\n", std);
    return;
}