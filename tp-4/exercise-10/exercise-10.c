// Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo.
// Presentar por pantalla el mensaje correspondiente.

#include <stdio.h>
int main()
{
    int val1 = 0, val2 = 0, val3 = 0;
    printf("Al ingresar tres valores positivos, se presentará por pantalla si son lados de un triangulo rectangulo.\n");
    printf("Ingrese el primer valor:");
    scanf("%d", &val1);
    printf("Ingrese el segundo valor:");
    scanf("%d", &val2);
    printf("Ingrese el tercer valor:");
    scanf("%d", &val3);

    if (val1 > 0 && val2 > 0 && val3 > 0)
    {
        if ((val1 + val2) > val3 && (val1 + val3) > val2 && (val2 + val3) > val1)
        {
            printf("Los valores %d, %d, %d forman un triangulo rectangulo.\n", val1, val2, val3);
        }
        else
        {
            printf("Los valores %d, %d, %d no forman un triangulo rectangulo.\n", val1, val2, val3);
        }
    }
    else
    {
        printf("Los valores %d, %d, %d no forman un triangulo rectangulo.\n", val1, val2, val3);
    }

    return 0;
}