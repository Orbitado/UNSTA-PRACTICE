// Ingresar una palabra que posea por lo menos 5 caracteres (no permitir que ingrese una
// palabra ma s corta), convertir sus caracteres a mayu sculas y con esta palabra generar una
// nueva palabra constituida por los dos primeros y los dos u ltimos caracteres de la misma.
// Ejemplo:  Ingresa:  popularidad
//  Presenta:  POPULARIDAD  POAD

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char word[30];

    printf("Ingresa una palabra: ");
    scanf("%s", word);

    if (strlen(word) < 5)
    {
        printf("Error: La palabra debe tener al menos 5 caracteres.");
        return 0;
    }

    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = toupper(word[i]);
    }

    char newWord[30];

    newWord[0] = word[0];
    newWord[1] = word[1];
    newWord[2] = word[strlen(word) - 2];
    newWord[3] = word[strlen(word) - 1];
    newWord[4] = '\0';

    printf("La nueva palabra es: %s", newWord);

    return 0;
}