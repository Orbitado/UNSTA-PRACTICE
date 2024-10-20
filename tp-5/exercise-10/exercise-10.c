// Ingresar un número, entero positivo, expresado en el sistema decimal, convertirlo al
// sistema binario. Presentar por pantalla el número en decimal y en binario.

#include <stdio.h>

void printBinary(int number)
{
    if (number == 0)
    {
        printf("0");
        return;
    }

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
    printf("\n");
}

int main()
{
    int number;
    printf("Ingresar un número entero positivo expresado en el sistema decimal. Convertirlo al sistema binario y mostrar ambos.\n");
    printf("Ingrese un número: ");
    scanf("%d", &number);

    printf("El número en decimal es: %d\n", number);
    printf("El número en binario es: ");
    printBinary(number);

    return 0;
}
