#include <stdio.h>
#include <math.h>
int main() {
    float n,l,c=1,d,x,y,p;
    printf("Ingrese la cantidad de puntos: ");
    scanf("%f",&n);
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f",&l);
    d=sqrt(l*l+l*l);
    while (c<=n)
    {
        printf("Ingrese el punto: ");
        scanf("%f",&x);
        scanf("%f",&y);
        if (x==l || y==l)
        {
            printf("El punto es a los lados");
        } else {
            p=sqrt(x*x+y*y);
            if (d<=p)
            {
                if (d==p)
                {
                    printf("Esta en la diagonal");
                } else {
                    printf("Esta arriba");
                }
                
            } else {
                printf("Esta debajo");
            }
            
        }
        c=c+1;
    }
    
    return 0;
}