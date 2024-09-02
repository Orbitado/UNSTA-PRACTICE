// Ingresar el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área del círculo.

#include <stdio.h>

int main()
{
    printf("Al ingresar el radio de un circulo, se presentará pors pantalla el diametro, el perimetro y el área del círculo.\n");
    float radio;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    float diameter = radio * 2;
    float perimeter = diameter * 3.14;
    float area = radio * radio * 3.14;
    printf("El diametro del circulo es de: %.2f \n", diameter);
    printf("El perimetro del circulo es de: %.2f \n", perimeter);
    printf("El area del circulo es de: %.2f \n", area);
    return 0;
}
