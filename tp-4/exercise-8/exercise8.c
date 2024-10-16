/* Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA
21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%. */

#include <stdio.h>

int main()
{
    float productPrice, iva, ibb, im, total;
    printf("Dado el precio de un producto, se presentará por pantalla los impuestos que debe pagar. IVA, IBB y IM.\n");
    printf("Ingrese el precio del producto: ");
    scanf("%f", &productPrice);
    printf("IVA: %.2f\n", iva = productPrice * 0.21);
    printf("IBB: %.2f\n", ibb = productPrice * 0.025);
    printf("IM: %.2f\n", im = productPrice * 0.015);
    printf("Total: %.2f\n", total = productPrice + iva + ibb + im);

    return 0;
}