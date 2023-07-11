#include <stdio.h>

int main(void)
{
    int i, j, k, l, m, rows;
    scanf("%d", &rows);
    if (0 < rows && rows < 25)
    {
        for (i = 0; i <= rows; i++)
        {
            for (j = rows - i - 1; j >= 0; j--)
            {
                printf("  ");
            }
            for (k = 0; k <= 2 * rows - 1; k++)
            {
                if (k < 2 * i - 1)
                {
                    printf("* ");
                }
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
