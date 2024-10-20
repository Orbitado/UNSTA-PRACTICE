#include <stdio.h>

void inputArray(int array[], int n);
int countEquals(int array[], int n, int x);

int main()
{
    int n, x, array[50];

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    inputArray(array, n);

    printf("Ingrese el valor a comparar: ");
    scanf("%d", &x);

    int equals = countEquals(array, n, x);
    printf("El número de elementos iguales a %d en el vector es: %d\n", x, equals);

    return 0;
}

void inputArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int countEquals(int array[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            count++;
        }
    }
    return count;
}
