#include <stdio.h>

void inputArray(int array[], int size);

int main()
{
    int positiveSum = 0, negativeSum = 0, size, array[50];
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &size);

    inputArray(array, size);

    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            positiveSum += array[i];
        }
        else
        {
            negativeSum += array[i];
        }
    }

    printf("La acumulacion de positivos es: %d\n", positiveSum);
    printf("La acumulacion de negativos es: %d", negativeSum);

    return 0;
}

void inputArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}
