/*
8. Develop, implement and execute a C program to search a Name in a list of names using Binary
searching Technique.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char name[10][20], key[20];
    int n, i, low, high, mid, found = 0;
    printf("Enter number of names\n");
    scanf("%d", &n);
    printf("Enter the names in ascending order\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    printf("Enter the name to be searched\n");
    scanf("%s", key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (strcmp(name[mid], key) == 0)
        {
            found = 1;
            break;
        }
        else if (strcmp(name[mid], key) < 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found)
    {
        printf("Name found at position %d\n", mid + 1);
    }
    else
    {
        printf("Name not found\n");
    }
    return;
}