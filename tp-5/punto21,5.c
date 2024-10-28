#include <stdio.h>
void main () {
    float ae=0,aa=0,ce=0,ca=0,em=0,ma=0,pe,pa,e,a,c=0,n;
    printf("Ingrese la cantidad de personas: ");
    scanf("%f",&n);
    while (c<n)
    {
        printf("Ingrese la edad y la altura: ");
        scanf("%f",&e);
        scanf("%f",&a);
        if (e<em)
        {
            e=em;
        }
        ae=ae+e;
        ce=ce+1;
        if (a<ma)
        {
            a=ma;
        }
        aa=aa+a;
        ca=ca+1;
        c=c+1;
    }
    pe=ae/ce;
    pa=aa/ca;
    printf("la mayor edad es: %f, la mayor altura es: %f",em,ma);
    printf("El promedio de edades es: %f, y el de la altura es: %f",pe,pa);


}