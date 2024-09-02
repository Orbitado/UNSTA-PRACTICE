// Ingresar los lados de un rectángulo, presentar por pantalla su perímetro y su superficie.

#include <stdio.h>

int main()
{
    float base, height;
    float perimeter;
    int surface;

    printf("Al ingresar los lados de un rectangulo, se presentara por pantalla su perimetro y su superficie expresado en la unidad con la que desea trabajar. \n");
    printf("Ingrese el primer lado del rectangulo: ");
    scanf("%f", &base);
    printf("Ingrese el segundo lado del rectangulo: ");
    scanf("%f", &height);
    perimeter = base * 2 + height * 2;
    surface = base * height;
    printf("Perimetro: %.2f \n", perimeter);
    printf("Superficie: %d", surface);
    return 0;
}