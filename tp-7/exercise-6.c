// Ingresar una palabra y contar cuantas vocales posee. Presentar por pantalla el
// resultado.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[30];
    int vowelCounter = 0;

    printf("Ingrese una palabra: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = toupper(word[i]);

        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            vowelCounter++;
        }
    }

    printf("La palabra posee %d vocales", vowelCounter);

    return 0;
}