// Ingresar N cadenas en minu sculas, pasarlas a mayu sculas y ordenarlas
// alfabe ticamente.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    int n;

    printf("Ingrese el número de cadenas a ingresar: \n");
    scanf("%d", &n);

    char string[n][100];

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese la cadena %d: \n", i + 1);
        scanf("%s", string[i]);

        for (int j = 0; string[i][j] != '\0'; j++)
        {
            string[i][j] = toupper(string[i][j]);
        }
    }

    qsort(string, n, sizeof(string[0]), compare);

    printf("\nCadenas en mayúsculas y ordenadas alfabéticamente:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", string[i]);
    }

    return 0;
}