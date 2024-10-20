#include <stdio.h>
#include "vector.h"

int calculateNumber(int array[], int size, int c);

void main()
{
    int size, c, array[50];
    printf("Ingrese el orden del vector: \n");
    scanf("%d", &size);
    inputArray(array, size); // Cambié 'ingresarVector' a 'inputArray'

    printf("Ingrese un valor entero: ");
    scanf("%d", &c);

    int result = calculateNumber(array, size, c);
    printf("%d", result);
}

int calculateNumber(int array[], int size, int c)
{
    int number = 1;
    for (int i = 0; i < size; i++)
    {
        number = number * (array[i] - c);
    }

    return number;
}
