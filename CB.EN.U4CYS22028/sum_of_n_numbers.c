#include <stdio.h>
int main(void)
{
    printf("Enter the number till which you would like to find the sum of n numbers:");
    int j;
    int sum = 0;
    scanf("%d", &j);
    for (int i = 1; i <= j; i++)
    {
        sum += i;
    }
    printf("The sum is :%d", sum);
    return 0;
}