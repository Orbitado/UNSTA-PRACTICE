// ##include <stdio.h>

int main()
{
    // Tipos de datos básicos

    // Consts
    const int MAX_BUFFER_SIZE = 1024;

    // Enteros
    int entero = 42;             // Número entero
    unsigned int u_entero = 100; // Entero sin signo (solo valores positivos)

    // Flotantes
    float flotante = 3.14f;       // Número con punto flotante de precisión simple
    double doble = 3.14159265359; // Número con punto flotante de doble precisión

    // Carácter
    char caracter = 'A';            // Carácter simple
    unsigned char u_caracter = 255; // Carácter sin signo (valores de 0 a 255)

    // Booleano
    _Bool booleano = 1; // Valor booleano (0 para falso, 1 para verdadero)

    // Tipos de datos extendidos

    // Enteros largos
    long largo = 100000L;                // Entero largo (puede almacenar valores más grandes)
    long long muy_largo = 10000000000LL; // Entero muy largo (valores aún más grandes)
    unsigned long u_largo = 100000UL;    // Entero largo sin signo

    // Flotantes largos
    long double muy_doble = 2.718281828459045L; // Flotante de precisión extendida

    // Strings (Cadena de caracteres)
    char cadena[] = "Hola, mundo!"; // Array de caracteres terminado en '\0'

    // Tipos compuestos

    // Array de enteros
    int array[5] = {1, 2, 3, 4, 5}; // Array de 5 enteros

    // Estructura
    struct Persona
    {
        char nombre[50];
        int edad;
        float altura;
    };
    struct Persona persona1 = {"Juan", 30, 1.75f}; // Inicialización de una estructura

    // Punteros
    int *p_entero = &entero; // Puntero a un entero
    char *p_cadena = cadena; // Puntero a una cadena de caracteres

    // Enumeraciones
    enum Dia
    {
        Lunes,
        Martes,
        Miercoles,
        Jueves,
        Viernes,
        Sabado,
        Domingo
    };
    enum Dia hoy = Martes; // Declaración de una variable enum

    // Imprimiendo algunas de las variables
    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);
    printf("Carácter: %c\n", caracter);
    printf("Booleano: %d\n", booleano);
    printf("Largo: %ld\n", largo);
    printf("Cadena: %s\n", cadena);
    printf("Persona: Nombre = %s, Edad = %d, Altura = %.2f\n", persona1.nombre, persona1.edad, persona1.altura);
    printf("Hoy es: %d\n", hoy); // Imprime el valor del enum (Martes = 1)

    return 0;
}
