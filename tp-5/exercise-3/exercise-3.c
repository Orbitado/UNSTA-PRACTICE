#include <stdio.h>

int main()
{
    int quantity;
    int sumEven = 0, sumOdd = 0;
    int countEven = 0, countOdd = 0;

    printf("Ingrese la cantidad de números a promediar: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        int number;
        printf("Ingrese el %d° número: ", i + 1);
        scanf("%d", &number);

        if (number == 0)
        {
            printf("El número 0 no cuenta.\n");
            continue;
        }

        if (number % 2 == 0)
        {
            sumEven += number;
            countEven++;
        }
        else
        {
            sumOdd += number;
            countOdd++;
        }
    }

    if (countEven > 0)
    {
        float averageEven = (float)sumEven / countEven;
        printf("El promedio de los números pares es: %.2f\n", averageEven);
    }
    else
    {
        printf("No se ingresaron números pares.\n");
    }

    if (countOdd > 0)
    {
        float averageOdd = (float)sumOdd / countOdd;
        printf("El promedio de los números impares es: %.2f\n", averageOdd);
    }
    else
    {
        printf("No se ingresaron números impares.\n");
    }

    return 0;
}
