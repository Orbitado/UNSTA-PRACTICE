// Ingresar una palabra y generar una nueva palabra que contenga las mismas letras, en
// mayu sculas, que la ingresada pero separadas por un espacio. Mostrar ambas palabras
// Ejemplo:  Ingresa:  vestimenta
//  Presenta:  vestimenta   V E S T I M E N T A

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

    printf("La palabra en mayusculas es: ");
    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c ", word[i]);
    }
    printf("\n");
    return 0;
}