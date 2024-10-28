#include <stdio.h>
void main () {
    int n,c=1,a=0,v;
    printf("Ingrese la cantidad de tiros: ");
    scanf("%d",&n);
    while (c<n)
    {
        printf("Ingrese el valor del dado: ");
        scanf("%d",&v);
        if (v%2==0)
        {
            a=a+v;
            c=c+1;
        } else {
            c=n;
        }
        
    }
    printf("La cantidad de puntos es: %d",a);
}