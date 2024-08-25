#include <stdio.h>
#include <math.h>

float geometric(int num1, int num2)
{
    float product = num1 * num2;
    float geometric_mean = sqrt(product);
    return geometric_mean;
}

int main()
{
    int num1, num2;
    printf("Al ingresar dos numeros enteros se presentara por pantalla la media geometrica.\n");
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);
    printf("La media geometrica de los valores dados es: %.2f\n", geometric(num1, num2));
    return 0;
}
