// Ingresar dos números de cuatro dígitos expresados en el sistema binario, presentar por
// pantalla ambos números y su suma.

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary)
{
    int decimal = 0, exponent = 0;

    while (binary > 0)
    {
        int remainder = binary % 10;
        decimal += remainder * pow(2, exponent);
        exponent++;
        binary /= 10;
    }
    return decimal;
}

void decimalToBinary(int number)
{
    int binary[32];
    int i = 0;

    while (number > 0)
    {
        binary[i] = number % 2;
        number /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main()
{
    int binary1, binary2;

    printf("Ingresar dos números de cuatro dígitos en binario.\n");

    printf("Ingrese el primer número binario (4 dígitos): ");
    scanf("%d", &binary1);

    printf("Ingrese el segundo número binario (4 dígitos): ");
    scanf("%d", &binary2);

    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);

    int suma = decimal1 + decimal2;

    printf("\nEl primer número binario es: %04d\n", binary1);
    printf("El segundo número binario es: %04d\n", binary2);

    printf("\nLa suma en decimal es: %d\n", suma);
    printf("La suma en binario es: ");
    decimalToBinary(suma);
    printf("\n");

    return 0;
}
