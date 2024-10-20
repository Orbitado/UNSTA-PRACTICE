#include <stdio.h>

void main()
{
    int n, a, b, vector[20];

    printf("Ingrese el orden del vector (maximo 20): ");
    scanf("%d", &n);

    if (n < 2 || n > 20)
    {
        printf("El tamaño debe ser al menos 2 y como máximo 20.\n");
        return;
    }

    printf("Ingrese A y B: ");
    scanf("%d", &a);
    scanf("%d", &b);

    vector[0] = a;
    vector[1] = b;

    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vector[i] = (vector[i - 2] + vector[i - 1]);
        }
        else
        {
            vector[i] = (vector[i - 3] - vector[i - 2]);
        }
    }

    printf("Elementos del vector:\n");
    for (int i = 0; i < n; i++)
    {
        printf("vector[%d]: %d\n", i, vector[i]);
    }
}
