#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Al ingresar tres números enteros, se presentarán por pantalla de forma ascendente. \n");
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer valor: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("Los valores ingresados son iguales.\n");
    }
    else
    {
        int aux;

        if (num1 > num2)
        {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }
        if (num2 > num3)
        {
            aux = num2;
            num2 = num3;
            num3 = aux;
        }
        if (num1 > num2)
        {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }

        printf("Los valores ordenados de forma ascendente son: %d, %d, %d\n", num1, num2, num3);
    }

    return 0;
}
