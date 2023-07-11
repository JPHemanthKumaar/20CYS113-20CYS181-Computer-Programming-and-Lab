#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void generatePrimes(int start, int end)
{
    printf("Prime numbers between %d and %d are :\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main()
{
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);
    generatePrimes(start, end);

    return 0;
}
