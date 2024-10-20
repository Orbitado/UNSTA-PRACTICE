// Ingresar las coordenadas de N puntos en el plano indicar cuántos de ellos están :
// a) en el origen de coordenadas
// b) en el eje x
// c) en el eje y
// d) en el  primer cuadrante
// e) en el segundo cuadrante
// f) en el tercer cuadrante
// g) en el cuarto cuadrante

#include <stdio.h>
#include "whereIs.h"

int main()
{
    int quantity;
    printf("Ingrese la cantidad de puntos a verificar: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        float x, y;
        printf("Ingrese las coordenadas del %d° punto (x y): ", i + 1);
        scanf("%f %f", &x, &y);

        whereIs(x, y);
    }
}
