// include <stdio.h>

int main()
{
    int a = 5;
    int b = -a; // Negación unaria: invierte el signo de a
    int c = +a; // Operador más unario: simplemente devuelve el valor de a (generalmente se usa para claridad)

    // Incremento y decremento unarios
    int pre_incremento = ++a;  // Pre-incremento: incrementa a y luego asigna (a = 6, pre_incremento = 6)
    int post_incremento = a++; // Post-incremento: asigna el valor actual de a y luego incrementa (post_incremento = 6, a = 7)

    int pre_decremento = --a;  // Pre-decremento: decrementa a y luego asigna (a = 6, pre_decremento = 6)
    int post_decremento = a--; // Post-decremento: asigna el valor actual de a y luego decrementa (post_decremento = 6, a = 5)

    // Operador NOT lógico unario
    int es_cero = !a; // NOT lógico: si a es diferente de cero, es_cero será 0; si a es cero, es_cero será 1

    // Operador NOT bit a bit unario
    int not_bit_a_bit = ~a; // NOT bit a bit: invierte todos los bits de a

    // Operador de dirección (unario)
    int *p = &a; // Obtiene la dirección de la variable a

    // Operador de indirección (unario)
    int valor = *p; // Obtiene el valor almacenado en la dirección a la que apunta p

    // Imprimiendo los resultados
    printf("Negación unaria: %d\n", b);
    printf("Operador más unario: %d\n", c);
    printf("Pre-incremento: %d\n", pre_incremento);
    printf("Post-incremento: %d\n", post_incremento);
    printf("Pre-decremento: %d\n", pre_decremento);
    printf("Post-decremento: %d\n", post_decremento);
    printf("NOT lógico unario: %d\n", es_cero);
    printf("NOT bit a bit unario: %d\n", not_bit_a_bit);
    printf("Dirección de a: %p\n", (void *)p);
    printf("Valor en la dirección apuntada por p: %d\n", valor);

    return 0;
}
