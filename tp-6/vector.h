#include <stdio.h>

void inputArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void readArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
