// 5. Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores
// ingresados.

#include <stdio.h>

int main()
{
    int quantity, max = 0, min = 0;
    printf("Al ingresar N valores numéricos, se presentarán por pantalla el mayor y el menor de ellos.\n");
    printf("Ingrese la cantidad de números a determinar: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        int number;
        printf("Ingrese el %d° número: ", i + 1);
        scanf("%d", &number);

        if (number > max)
        {
            max = number;
        }

        if (number < min)
        {
            min = number;
        }
    }

    printf("El mayor de los %d números es: %d\n", quantity, max);
    printf("El menor de los %d números es: %d\n", quantity, min);
    return 0;
}