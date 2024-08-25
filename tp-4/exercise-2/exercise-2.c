// Leer dos números enteros presentar por pantalla el promedio de ellos.

#include <stdio.h>

float average(float num1, float num2)
{
    return (num1 + num2) / 2;
}

int main()
{
    float num1, num2;
    printf("Al ingresar dos numeros enteros se presentara por pantalla su promedio. \n");
    printf("Ingrese el primer valor: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &num2);
    printf("El promedio de los numeros enteros dados es de: %0.1f\n", average(num1, num2));
    return 0;
}
