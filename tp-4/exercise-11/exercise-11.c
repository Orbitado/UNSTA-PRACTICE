#include <stdio.h>

int main()
{
    int bornDate, bornMonth, bornYear, currentDate, currentMonth, currentYear;
    printf("Al ingresar la fecha de nacimiento y la fecha actual se presentara por pantalla la edad. \n");
    printf("Ingrese la fecha de nacimiento (dd-mm-aaaa): ");
    scanf("%d %d %d", &bornDate, &bornMonth, &bornYear);
    printf("\nIngrese la fecha actual (dd-mm-aaaa): ");
    scanf("%d %d %d", &currentDate, &currentMonth, &currentYear);

    int age = currentYear - bornYear;
    if (currentMonth < bornMonth || (currentMonth == bornMonth && currentDate < bornDate))
    {
        age--;
    }

    printf("La edad es: %d\n", age);
    return 0;
}
