// Ingresar un número expresado en el sistema binario, convertirlo al sistema decimal.
// Presentar ambos números en el centro de la pantalla.

#include <stdio.h>

int isBinary(int number)
{
    while (number > 0)
    {
        int digit = number % 10;
        if (digit != 0 && digit != 1)
        {
            return 0;
        }
        number /= 10;
    }
    return 1;
}

int main()
{
    int number, decimal = 0, exponent = 0;

    printf("Al ingresar un número binario se presentará su equivalente en decimal.\n");
    printf("Ingrese un número binario: ");
    scanf("%d", &number);

    if (!isBinary(number))
    {
        printf("El número ingresado no es un número binario válido.\n");
        return 1;
    }

    int originalNumber = number;

    while (number > 0)
    {
        int remainder = number % 10;
        decimal += remainder * (1 << exponent);
        exponent++;
        number /= 10;
    }

    printf("El número binario es: %d\n", originalNumber);
    printf("El número decimal es: %d\n", decimal);

    return 0;
}
