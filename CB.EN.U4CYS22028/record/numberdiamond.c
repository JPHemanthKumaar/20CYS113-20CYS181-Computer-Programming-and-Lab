#include <stdio.h>
int main()
{
    int rows, space, i, j, k; // Declaring variablea
    scanf("%d", &rows);       // Recieving input
    for (i = 1; i <= rows; i++)
    {
        k = 9;                                      // Initialising k=9
        for (space = 1; space <= rows - i; space++) // Printing the upper half
        {
            printf(" "); // Printing spaces
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", k); // Printing the numbers
            k--;
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 0; i--) // Printing the lower half
    {
        k = 9;
        for (space = 1; space <= rows - i; space++)
        {
            printf(" "); // Printing spaces
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", k); // Printing the numbers
            k--;
        }
        printf("\n");
    }
}