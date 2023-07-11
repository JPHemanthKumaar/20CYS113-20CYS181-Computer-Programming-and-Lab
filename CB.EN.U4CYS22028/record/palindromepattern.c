#include <stdio.h>
int main()
{
    int i, j, rows;
    scanf("%d", &rows);
    printf("*\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            //@start-editable@
            if (j == 1)
            {
                printf("*"); // Printing * for 1st element in each line
            }
            printf("%d", j); // Printing 1 after that
            //@end-editable@
        }
        for (j = i - 1; j >= 1; j--)
        {
            //@start-editable@
            printf("%d", j); // Printing the other numbers
            //@end-editable@
        }
        //@start-editable@
        printf("*\n"); // Printing * at the end of each line
        //@end-editable@
    }
    //@start-editable@
    for (i = rows - 1; i >= 1; i--)
    { // For lower pattern
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("*"); // Printing * as 1st element of each line
            }
            printf("%d", j); // Printing 1 after that
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j); // Printing the numbers
        }
        printf("*\n"); // Printing * at the end
    }
    //@end-editable@
    {
        //@start-editable@
        //@end-editable@
    }
    printf("*\n");
    return 0;
}
