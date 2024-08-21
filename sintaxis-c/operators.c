// ##include <stdio.h>

int main()
{
    // Operadores aritméticos
    int a = 10, b = 3;
    int suma = a + b;           // Suma: 10 + 3 = 13
    int resta = a - b;          // Resta: 10 - 3 = 7
    int multiplicacion = a * b; // Multiplicación: 10 * 3 = 30
    int division = a / b;       // División entera: 10 / 3 = 3
    int modulo = a % b;         // Módulo: 10 % 3 = 1

    // Operadores de incremento y decremento
    int incremento = ++a; // Pre-incremento: a = 11, incremento = 11
    int decremento = --b; // Pre-decremento: b = 2, decremento = 2

    // Operadores de asignación
    int x = 5;
    x += 3; // Asignación con suma: x = x + 3 = 8
    x -= 2; // Asignación con resta: x = x - 2 = 6
    x *= 4; // Asignación con multiplicación: x = x * 4 = 24
    x /= 3; // Asignación con división: x = x / 3 = 8
    x %= 5; // Asignación con módulo: x = x % 5 = 3

    // Operadores de comparación
    int igual = (a == b);       // Igualdad: 11 == 2 = 0 (falso)
    int distinto = (a != b);    // Desigualdad: 11 != 2 = 1 (verdadero)
    int mayor = (a > b);        // Mayor que: 11 > 2 = 1 (verdadero)
    int menor = (a < b);        // Menor que: 11 < 2 = 0 (falso)
    int mayor_igual = (a >= b); // Mayor o igual que: 11 >= 2 = 1 (verdadero)
    int menor_igual = (a <= b); // Menor o igual que: 11 <= 2 = 0 (falso)

    // Operadores lógicos
    int y_logico = (a > 5 && b < 10); // AND lógico: 11 > 5 && 2 < 10 = 1 (verdadero)
    int o_logico = (a < 5 || b > 1);  // OR lógico: 11 < 5 || 2 > 1 = 1 (verdadero)
    int no_logico = !(a == 11);       // NOT lógico: !(11 == 11) = 0 (falso)

    // Operadores bit a bit
    int bit_and = a & b;       // AND bit a bit: 11 & 2 = 2
    int bit_or = a | b;        // OR bit a bit: 11 | 2 = 11
    int bit_xor = a ^ b;       // XOR bit a bit: 11 ^ 2 = 9
    int bit_not = ~a;          // NOT bit a bit: ~11 = -12 (complemento a 2)
    int desplaza_izq = a << 1; // Desplazamiento a la izquierda: 11 << 1 = 22
    int desplaza_der = a >> 1; // Desplazamiento a la derecha: 11 >> 1 = 5

    // Operadores especiales
    int condicion = (a > b) ? a : b; // Operador ternario: si a > b, entonces a, si no, b

    // Punteros
    int *p = &a;    // Operador de dirección: obtiene la dirección de a
    int valor = *p; // Operador de indirección: obtiene el valor en la dirección de p

    // Imprimiendo los resultados
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %d\n", division);
    printf("Módulo: %d\n", modulo);
    printf("Incremento: %d\n", incremento);
    printf("Decremento: %d\n", decremento);
    printf("Asignación con suma (x += 3): %d\n", x);
    printf("Igual: %d\n", igual);
    printf("Distinto: %d\n", distinto);
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);
    printf("AND lógico: %d\n", y_logico);
    printf("OR lógico: %d\n", o_logico);
    printf("NOT lógico: %d\n", no_logico);
    printf("AND bit a bit: %d\n", bit_and);
    printf("OR bit a bit: %d\n", bit_or);
    printf("XOR bit a bit: %d\n", bit_xor);
    printf("NOT bit a bit: %d\n", bit_not);
    printf("Desplazamiento a la izquierda: %d\n", desplaza_izq);
    printf("Desplazamiento a la derecha: %d\n", desplaza_der);
    printf("Operador ternario: %d\n", condicion);
    printf("Valor en la dirección de p: %d\n", valor);

    return 0;
}
