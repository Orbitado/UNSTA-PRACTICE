// Ingresar dos números enteros positivos N1 y N2, con N1 < N2 y un número x cualquiera,
// presentar por pantalla los múltiplos de x comprendidos entre N1 y N2.

#include <stdio.h>

int main()
{
    int N1, N2, x;

    printf("Ingrese un número entero positivo N1: ");
    scanf("%d", &N1);

    printf("Ingrese un número entero positivo N2 (mayor que N1): ");
    scanf("%d", &N2);

    printf("Ingrese un número entero positivo x: ");
    scanf("%d", &x);

    if (N1 >= N2)
    {
        printf("Error: N1 debe ser menor que N2.\n");
        return 1;
    }

    printf("Los múltiplos de %d comprendidos entre %d y %d son:\n", x, N1, N2);

    for (int i = N1; i <= N2; i++)
    {
        if (i % x == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
