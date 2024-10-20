#include "whereIs.h"
#include <stdio.h>

void whereIs(float x, float y)
{
    if (x == 0 && y == 0)
    {
        printf("El punto (%.2f, %.2f) pertenece al origen de coordenadas.\n", x, y);
    }
    else if (x == 0)
    {
        printf("El punto (%.2f, %.2f) pertenece al eje x.\n", x, y);
    }
    else if (y == 0)
    {
        printf("El punto (%.2f, %.2f) pertenece al eje y.\n", x, y);
    }
    else if (x > 0 && y > 0)
    {
        printf("El punto (%.2f, %.2f) pertenece al primer cuadrante.\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("El punto (%.2f, %.2f) pertenece al segundo cuadrante.\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("El punto (%.2f, %.2f) pertenece al tercer cuadrante.\n", x, y);
    }
    else
    {
        printf("El punto (%.2f, %.2f) pertenece al cuarto cuadrante.\n", x, y);
    }
}