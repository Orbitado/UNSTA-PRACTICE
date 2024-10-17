#include "crudContact.h"
#include <stdio.h>

FILE *openFile(const char *fileName, const char *mode)
{
    FILE *fp = fopen(fileName, mode);
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    return fp;
}
