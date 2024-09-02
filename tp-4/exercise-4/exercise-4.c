/* Convertir una medida dada en metros a sus equivalentes en decímetros y centímetros.
Presentar por  pantalla las tres magnitudes con sus respectivas unidades. */
#include <stdio.h>

void converter(float meters, float *decimeters, float *centimeters)
{
    *decimeters = meters * 10;
    *centimeters = meters * 100;
}

int main()
{
    float meters, decimeters, centimeters;

    printf("Al ingresar un numero cualquiera que represente una medida en metros, se presentara por pantalla su equivalente en decimetros y centimetros.\n");
    printf("Ingrese un numero que represente un valor en metros: ");
    scanf("%f", &meters);

    converter(meters, &decimeters, &centimeters);

    printf("Metros: %.1fm\n", meters);
    printf("Decimetros: %.1fdm\n", decimeters);
    printf("Centimetros: %.1fcm\n", centimeters);

    return 0;
}
