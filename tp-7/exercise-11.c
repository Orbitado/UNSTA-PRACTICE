// Ingresar una palabra en minu sculas o mayu sculas (contemplar ambos casos) y
// reemplazar cada consonante por dos signos +. Presentar ambas palabras.
// Ejemplos:
// Ingresa:
// Presenta:
// Ingresa:
// Presenta:
// LOCALIDAD
// LOCALIDAD
// localidad
// localidad
// ++O++A++I++A++
// ++o++a++i++a++

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    char word[30];
    char newWord[60];
    int j = 0;
    printf("Ingresa una palabra: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = tolower(word[i]);
        if (isVowel(word[i]))
        {
            newWord[j++] = word[i];
        }
        else
        {
            newWord[j++] = '+';
            newWord[j++] = '+';
        }
    }

    newWord[j] = '\0';

    printf("Palabra original: %s\n", word);
    printf("Palabra modificada: %s\n", newWord);
    return 0;
}