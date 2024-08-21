#include <stdio.h>

int operacion(int a, int b, char op)
{
    int resultado = 0;

    switch (op)
    {
    case '+':
        resultado = a + b;
        break;
    case '-':
        resultado = a - b;
        break;
    case '*':
        resultado = a * b;
        break;
    case '/':
        resultado = a / b;
        break;
    default:
        printf("Operacion desconocida\n");
    }

    return resultado;
}

int main()
{
    int a, b;
    char op;

    do
    {
        printf("Ingrese el primer valor: ");
        scanf("%d", &a);

        if (a == 0)
            break;

        printf("Ingrese el operador (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Ingrese el segundo valor: ");
        scanf("%d", &b);
        int resultado = operacion(a, b, op);
        printf("El resultado de %d %c %d es: %d\n", a, op, b, resultado);
    } while (a != 0);

    return 0;
}
