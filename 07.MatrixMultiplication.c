/*
7. Develop, implement and execute a C program that reads two matrices A (m x n ) and B
(p x q ) and Compute product of matrices A and B. Read matrix A and matrix B in row
major order and in column major order respectively. Print both the input matrices and resultant
matrix with suitable headings and output should be in matrix format only. Program must
check the compatibility of orders of the matrices for multiplication. Report appropriate
message in case of incompatibility. 
*/

#include <stdio.h>
void main()
{
    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;
    printf("Enter the order of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n == p)
    {
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("The resultant matrix is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible\n");
    }
    return;
}