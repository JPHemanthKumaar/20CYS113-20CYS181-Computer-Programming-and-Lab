#include <stdio.h>
int main()
{
    int i, j, k;
    int a[3][3], b[3][3], c[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); // Storing the numbers of First Matrix
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]); // Storing the numbers of Second Matrix
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j]; // Perform Matrix Multiplication of 2 matrices
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]); // Result of 2*2 Matrix Multiplication will be here
        }
        printf("\n");
    }
    return 0;
}