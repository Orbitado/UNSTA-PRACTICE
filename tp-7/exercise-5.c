// Ingresar una palabra en mayu sculas (controlar) y eliminar de la misma la cadena "CA"
// cada vez que la encuentre.
// Ejemplos:  Ingresa:  CASCARA → Presenta:  SRA
//  Ingresa:  CASONA → Presenta:  SONA
//  Ingresa:  CASACA → Presenta:  SA

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[30];
    char newWord[30];
    int j = 0;

    printf("Ingrese una palabra en mayusculas: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (!isupper(word[i]))
        {
            printf("Error: La palabra debe estar en mayúsculas.\n");
            return 0;
        }
    }

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'C' && word[i + 1] == 'A')
        {
            i++;
        }
        else
        {
            newWord[j++] = word[i];
        }
    }

    newWord[j] = '\0';

    printf("La nueva palabra es: %s", newWord);

    return 0;
}