// 7. Ingresar un número natural de 4 o más dígitos, invertir el orden de sus dígitos.
// Presentar por pantalla el número ingresado y su invertido.
// Ejemplo: número = 34256, invertido = 65243

#include <stdio.h>

int invert(int number)
{
    int result = 0;
    while (number > 0)
    {
        int digit = number % 10;
        result = result * 10 + digit;
        number = number / 10;
    }

    return result;
}

int main()
{

    int number;
    printf("Al ingresar un número natural de 4 o más dígitos, se invertira el orden de sus dígitos. \n");
    printf("Ingrese un número natural de 4 o más dígitos: ");
    scanf("%d", &number);
    printf("El número invertido es: %d\n", invert(number));
    return 0;
}