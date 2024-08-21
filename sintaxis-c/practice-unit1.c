// Incluye las bibliotecas estándar necesarias para funciones básicas
// #include <stdio.h>  // Biblioteca estándar para la entrada y salida (I/O) standard input output

// Declaración de una función que devuelve un entero
int suma(int a, int b)
{
    // Esta función toma dos enteros como argumentos y retorna su suma
    return a + b;
}

// Función principal del programa, donde comienza la ejecución
int main()
{
    // Declaración de variables locales
    int x = 5;  // Declarando y asignando un valor entero a 'x'
    int y = 10; // Declarando y asignando un valor entero a 'y'

    // Llamando a la función 'suma' y almacenando el resultado en 'resultado'
    int resultado = suma(x, y);

    // Imprimiendo el resultado en la consola // El porcentaje significa que se imprimira en la consola el resultado
    printf("La suma de %d y %d es: %d\n", x, y, resultado);

    // Retornando 0 para indicar que el programa terminó correctamente
    return 0;
}