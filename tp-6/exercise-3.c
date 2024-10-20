#include "vector.h"
#include <stdio.h>

int maxElement(int array[], int size);
int positionOfMax(int array[], int size);

int main()
{
    int size, array[50];
    printf("Ingrese el orden del vector: ");
    scanf("%d", &size);
    inputArray(array, size);

    int maxElementValue = maxElement(array, size);
    int maxElementPosition = positionOfMax(array, size);
    printf("El mayor el elemento del vector es: %d y su posicion es: %d", maxElementValue, maxElementPosition);

    return 0;
}

int maxElement(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int positionOfMax(int array[], int size)
{
    int position = 0, max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            position = i;
        }
    }
    return position + 1;
}
