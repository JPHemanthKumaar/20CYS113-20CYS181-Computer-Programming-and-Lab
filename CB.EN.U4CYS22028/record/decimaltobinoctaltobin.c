#include <stdio.h>

void decimalToBinary(int decimal)
{
    int binary[32];
    int i = 0;
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary representation: ");
    if (i == 0)
    {
        printf("0");
    }
    else
    {
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
    }
    printf("\n");
}
void decimalToOctal(int decimal)
{
    int octal[32];
    int i = 0;
    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal representation: ");
    if (i == 0)
    {
        printf("0");
    }
    else
    {
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", octal[j]);
        }
    }
    printf("\n");
}
void decimalToHexadecimal(int decimal)
{
    char hexadecimal[32];
    int i = 0;
    while (decimal > 0)
    {
        int remainder = decimal % 16;
        if (remainder < 10)
        {
            hexadecimal[i] = remainder + '0';
        }
        else
        {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        decimal /= 16;
        i++;
    }
    printf("Hexadecimal representation: ");
    if (i == 0)
    {
        printf("0");
    }
    else
    {
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%c", hexadecimal[j]);
        }
    }
    printf("\n");
}
int main()
{
    int decimal;
    scanf("%d", &decimal);
    if (decimal <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }
    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);

    return 0;
}
