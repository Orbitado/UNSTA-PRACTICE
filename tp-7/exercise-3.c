// Ingresar una palabra y generar una nueva donde se han reemplazado las vocales de la
// palabra ingresada, por asteriscos (*). Presentar ambas palabras.
// Ejemplo:  Ingresa:  restaurant
//  Presenta:  restaurant  R*ST**R*NT

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

        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            word[i] = '*';
        }
    }

    printf("La palabra en asteriscos es: ");
    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}