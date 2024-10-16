// Ingresar dos puntos en el plano P1(x1, y1) y P2(x2, y2), estos corresponden, respectivamente, a los vértices inferior izquierdo y superior derecho de un rectángulo. Indicar
// el perímetro y la superficie del rectángulo.

#include <stdio.h>

int main()
{
    int l1 = 0, l2 = 0, l3 = 0, l4 = 0;

    printf("Ingresar los lados del rectangulo: \n");
    printf("Lado 1: ");
    scanf("%d", &l1);
    printf("Lado 2: ");
    scanf("%d", &l2);
    printf("Lado 3: ");
    scanf("%d", &l3);
    printf("Lado 4: ");
    scanf("%d", &l4);

    int perimetro = l1 + l2 + l3 + l4;
    int superficie = l1 * l2;
    printf("Perimetro: %d \n", perimetro);
    printf("Superficie: %d \n", superficie);
    return 0;
}