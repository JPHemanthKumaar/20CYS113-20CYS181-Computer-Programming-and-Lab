#include <stdio.h>
int main()
{
    int i, j, k;
    int m, n;
    scanf("%d%d", &m, &n);
    int a[100][100], b[100][100], r[100][100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            r[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}
