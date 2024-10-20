// Ingresar una palabra en mayu sculas y presentarla en minu sculas.
// Ejemplo:
// Ingresa: PIMPILNELA
// Presenta: pimpinela

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char upperWord[30];

    printf("Ingrese una palabra en mayusculas: ");
    scanf("%s", upperWord);

    for (int i = 0; upperWord[i] != '\0'; i++)
    {
        if (!isupper(upperWord[i]))
        {
            printf("Error: La palabra debe estar en mayusculas");
            return 0;
        }
    }

    for (int i = 0; upperWord[i] != '\0'; i++)
    {
        upperWord[i] = tolower(upperWord[i]);
    }

    printf("La palabra en minusculas es: %s", upperWord);
    return 0;
}