// Ingresar una palabra en minu sculas y convertir las consonantes en mayu sculas.
// Presentar ambas palabras.
// Ejemplo:
// Ingresa: patagonia
// Presenta: PaTaGoNia

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[30];
    char newWord[30];

    printf("Ingrese una palabra: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (!islower(word[i]))
        {
            printf("Error: La palabra debe estar en minusculas.\n");
            return 0;
        }
    }

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (!(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'))
        {
            newWord[i] = toupper(word[i]);
        }
        else
        {
            newWord[i] = word[i];
        }
    }

    newWord[strlen(word)] = '\0';

    printf("La palabra es: %s \n", word);
    printf("La nueva palabra con sus consonantes en mayusculas es: %s", newWord);

    return 0;
}