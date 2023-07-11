#include <stdio.h>
int main()
{
    int i, units;
    float bill;
    char name[50], ebNumber[50];
    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter details for House %d:\n", i);
        printf("Name of the consumer: ");
        scanf("%s", name);
        printf("EB number: ");
        scanf("%s", ebNumber);
        printf("Units consumed: ");
        scanf("%d", &units);
        if (units <= 100)
        {
            bill = 0;
        }
        else if (units <= 400)
        {
            bill = (units - 100) * 2.25;
        }
        else if (units <= 500)
        {
            bill = (300 * 2.25) + (units - 400) * 4.50;
        }
        else if (units <= 600)
        {
            bill = (300 * 2.25) + (100 * 4.50) + (units - 500) * 6.00;
        }
        else
        {
            bill = (300 * 2.25) + (100 * 4.50) + (100 * 6.00) + (units - 600) * 8.00;
        }
        printf("\nElectricity Bill %d\n", i);
        printf("Name: %s\n", name);
        printf("EB Number: %s\n", ebNumber);
        printf("Units Consumed: %d\n", units);
        printf("Bill Amount: %.2f\n", bill);
    }
    return 0;
}
