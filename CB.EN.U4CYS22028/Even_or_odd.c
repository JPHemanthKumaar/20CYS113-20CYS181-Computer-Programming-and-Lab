#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The entered number is even");
    }
    else
    {
        printf("The entered number is odd");
    }
    return 0;
}