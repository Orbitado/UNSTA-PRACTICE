#include <stdio.h>

int main()
{
    int quantity;
    printf("Al ingresar N puntos (x, y), se determinará si pertenecen a la recta y = 2/3x - 2, están arriba o debajo de ella.\n");
    printf("Ingrese la cantidad de puntos a verificar: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        float x, y;
        printf("Ingrese las coordenadas del %d° punto (x y): ", i + 1);
        scanf("%f %f", &x, &y);

        float recta_y = (2.0 / 3.0) * x - 2;

        if (y == recta_y)
        {
            printf("El punto (%.2f, %.2f) pertenece a la recta.\n", x, y);
        }
        else if (y > recta_y)
        {
            printf("El punto (%.2f, %.2f) está arriba de la recta.\n", x, y);
        }
        else
        {
            printf("El punto (%.2f, %.2f) está debajo de la recta.\n", x, y);
        }
    }

    return 0;
}
