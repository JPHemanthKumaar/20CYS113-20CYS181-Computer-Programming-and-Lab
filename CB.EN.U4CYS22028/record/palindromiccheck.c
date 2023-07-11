#include <stdio.h>
int palindromecheck(int n)
{ // Fuction to check palindrome
    int normal = n;
    int reverse = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10; // Reversing the number
    }
    if (normal == reverse)
    { // Checking if the reverse number = original input
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    scanf("%d", &num); // INput number
    if (num < 0)
    {
        num = -num; // Case for negative numbers
    }
    if (palindromecheck(num))
    { // Using function for palindrome check
        printf("Is a palindrome.");
    }
    else
    {
        printf("Is not a palindrome.");
    } // Printing output according to the return value
}