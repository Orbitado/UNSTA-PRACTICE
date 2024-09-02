// Convertir temperatura en grados Fahrenheit a grados centígrados. Presentar por pantalla ambos valores con sus unidades.
// T°C = 5/9 (T°F - 32)

#include <stdio.h>

int main()
{
    float fahr, celsius;
    printf("Al ingresar una temperatura en grados Fahrenheit se presentara por pantalla su equivalente en grados centigrados.\n");
    printf("Ingrese una temperatura en grados Fahrenheit: ");
    scanf("%f", &fahr);
    celsius = 5.0 / 9.0 * (fahr - 32.0);
    printf("Fahrenheit = %.1f, Celsius = %.1f\n", fahr, celsius);
    return 0;
}