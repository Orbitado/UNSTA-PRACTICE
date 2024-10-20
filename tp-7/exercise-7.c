// Ingresar dos nombres y un apellido, todos en minu sculas, y presentar el apellido y los
// dos nombres  (con la primera letra en mayu sculas) separados solamente por guiones.
//  Ejemplo:  Ingresa:  esteban manuel torres
//  Presenta:  Torres-Esteban-Manuel

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char firstName[20], secondName[20], lastName[20];

    printf("Ingrese el primer nombre: ");
    scanf("%s", firstName);

    printf("Ingrese el segundo nombre: ");
    scanf("%s", secondName);

    printf("Ingrese el apellido: ");
    scanf("%s", lastName);

    firstName[0] = toupper(firstName[0]);
    secondName[0] = toupper(secondName[0]);
    lastName[0] = toupper(lastName[0]);

    printf("%s-%s-%s", lastName, firstName, secondName);
    return 0;
}