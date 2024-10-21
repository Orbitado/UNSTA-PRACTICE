#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("./codigo.txt", "r+");
    if (fp == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char code[1000];
    char newCode[1000] = "";

    while (fgets(code, sizeof(code), fp) != NULL)
    {
        if (strstr(code, "#incluir") != NULL)
        {
            strcat(newCode, "#include <stdio.h>\n");
        }
        else if (strstr(code, "entero principal()") != NULL)
        {
            strcat(newCode, "int main()\n");
        }
        else if (strstr(code, "imprimirf") != NULL)
        {
            strcat(newCode, "printf");
            strcat(newCode, strchr(code, '('));
        }
        else if (strstr(code, "escanearf") != NULL)
        {
            strcat(newCode, "scanf");
            strcat(newCode, strchr(code, '('));
        }
        else if (strstr(code, "retornar") != NULL)
        {
            strcat(newCode, "return ");
            strcat(newCode, strchr(code, '0'));
        }
        else
        {
            strcat(newCode, code);
        }
    }

    fclose(fp);

    fp = fopen("./code.txt", "w");
    if (fp == NULL)
    {
        printf("Error al abrir el archivo para escribir.\n");
        return 1;
    }

    fputs(newCode, fp);
    fclose(fp);

    printf("Transpilación completada.\n");

    return 0;
}
