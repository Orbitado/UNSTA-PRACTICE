// Ingresar tres números enteros, presentar por pantalla la suma de ellos.

#include <stdio.h>
#include "exercise.h"

int main()
{
    int num1, num2, num3;
    printf("Al ingresar tres numeros enteros se presentara por pantalla la suma de ellos. \n");
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%d", &num3);
    printf("La suma de los tres valores es: %d\n", sum(num1, num2, num3));
    return 0;
}