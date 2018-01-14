/*
6. Develop an algorithm, implement and execute a C program that reads N integer numbers and
arrange them in ascending order using Bubble Sort. 
*/

#include <stdio.h>

void main()
{
    int n, i, j, a[10], temp;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Original Elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return;
}