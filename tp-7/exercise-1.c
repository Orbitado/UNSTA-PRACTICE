// Ingresar una palabra, en minu sculas, y presentarla en mayu sculas e invertida.
// Ejemplo:  Ingresa:   universidad
//  Presenta:   DADISREVINU

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[30];

    printf("Ingresa una palabra: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = toupper(word[i]);
    }

    printf("La palabra en invertida en mayusculas es: ");

    for (int i = strlen(word) - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    return 0;
}