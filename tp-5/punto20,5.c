#include <stdio.h>
#include <math.h>
void main () {
    float n, c=1, a=0,x,y,h,p;
    printf("Ingrese la cantidad de puntos: ");
    scanf("%f",&n);
    while (c<=n)
    {
        printf("Ingrese los puntos:  ");
        scanf("%f",&x);
        scanf("%f",&y);
        h=sqrt(x*x+y*y);
        if (h<1)
        {
            a=a+4;
        } else {
            if (h<2)
            {
                a=a+3;
            } else {
                if (h<3)
                {
                    a=a+2;
                } else {
                    a=a+1;
                }
                
            }
            
        }
            c=c+1;
        }           
        
        
    
    p=a/c;
    printf("La cantidad de puntaje obtenido es %f y su promedio es %f",a,p);

}