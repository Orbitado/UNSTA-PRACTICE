// Ingresar una palabra en mayu sculas y convertir las vocales en minu sculas. Presentar
// ambas palabras.
// Ejemplo:
// Ingresa:
// Presenta:
// ESPERANZA
// ESPERANZA
// eSPeRaNZa

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
        if (!isupper(word[i]))
        {
            printf("Error: La palabra debe estar en mayusculas.\n");
            return 0;
        }
    }

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            newWord[i] = tolower(word[i]);
        }
        else
        {
            newWord[i] = word[i];
        }
    }

    newWord[strlen(word)] = '\0';

    printf("La palabra es: %s \n", word);
    printf("La nueva palabra con sus vocales en minusculas es: %s", newWord);

    return 0;
}