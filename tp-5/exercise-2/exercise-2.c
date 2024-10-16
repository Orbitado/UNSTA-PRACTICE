#include <stdio.h>

int main()
{
    int quantity;
    float sum = 0.0;

    printf("Al ingresar N números, se presentarán por pantalla el promedio de ellos.\n");
    printf("Ingrese la cantidad de números a promediar: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        int number;
        printf("Ingrese el %d° número: ", i + 1);
        scanf("%d", &number);
        sum += number;
    }

    if (quantity > 0)
    {
        float average = sum / quantity;
        printf("El promedio de los %d números es: %.2f\n", quantity, average);
    }
    else
    {
        printf("No se puede calcular el promedio de cero números.\n");
    }

    return 0;
}
