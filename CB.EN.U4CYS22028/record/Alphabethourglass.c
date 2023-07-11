#include <stdio.h>
void main()
{
    int i, j, r;
    scanf("%d", &r); // Recieving Input
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
        {
            printf(" "); // Printing spaces
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {                          // For upper half
            printf("%c ", 67 + j); // Printing alphabets
        }
        printf("\n");
    }
    for (i = 2; i <= r; i++)
    { // For lower half
        for (j = 1; j <= r - i; j++)
        {
            printf(" "); // Printing spaces
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("%c ", 67 + j); // Printing alphabets
        }
        printf("\n");
    }
}