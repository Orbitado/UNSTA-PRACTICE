// Ingresar tres números enteros, determinar si están ordenados en forma ascendente o
// descendente, y si son consecutivos. Presentar por pantalla el mensaje correspondiente.

#include <stdio.h>

int main()
{

    int num1, num2, num3;

    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer valor: ");
    scanf("%d", &num3);

    if (num1 < num2 && num2 < num3)
    {
        printf("Los valores %d, %d, %d estan ordenados de forma ascendente.\n", num1, num2, num3);
    }
    else if (num1 > num2 && num2 > num3)
    {
        printf("Los valores %d, %d, %d estan ordenados de forma descendente.\n", num1, num2, num3);
    }
    else
    {
        printf("Los valores %d, %d, %d no estan ordenados.\n", num1, num2, num3);
    }

    return 0;
}