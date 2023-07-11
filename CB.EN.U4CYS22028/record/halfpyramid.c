#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    if (0 < n && n < 25)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
