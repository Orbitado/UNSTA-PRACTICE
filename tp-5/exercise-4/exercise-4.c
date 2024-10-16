// 4. Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos
// negativos y cuantos iguales a cero.

#include <stdio.h>

int main()
{
    int quantity, positive = 0, negative = 0, zero = 0;
    printf("Ingrese la cantidad de números que desea saber cuales son positivos, negativos e iguales a cero: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        int number;
        printf("Ingrese el %d° número: ", i + 1);
        scanf("%d", &number);

        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("La cantidad de números positivos es: %d\n", positive);
    printf("La cantidad de números negativos es: %d\n", negative);
    printf("La cantidad de números iguales a cero es: %d\n", zero);
}