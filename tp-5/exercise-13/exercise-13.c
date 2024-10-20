// Ingresar un número de 4 dígitos, presentar por pantalla todos sus divisores.

#include <stdio.h>

int main()
{
    int number;

    printf("Ingrese un número de 4 dígitos: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999)
    {
        printf("Error: Debe ingresar un número de 4 dígitos.\n");
        return 1;
    }

    printf("Los divisores de %d son:\n", number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
