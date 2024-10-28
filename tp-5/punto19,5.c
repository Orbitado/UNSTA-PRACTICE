#include <stdio.h>
void main(){
    float n, c=1,ap=0,an=0,x,y,s;
    int a1er=0,a2do=0,a3er=0,a4to=0;
    printf("Ingrese la cantidad de puntos: ");
    scanf("%f",&n);
    while (c<=n)
    {
        printf("Ingrese los puntos: \n");
        scanf("%f",&x);
        scanf("%f",&y);
        if (x>0)
        {
            if (y>0)
            {
                a1er=a1er+1;
            } else {
                a4to=a4to+1;
            }
            
        } else {
            if (y>0)
            {
                a2do=a2do+1;
            } else {
                a3er=a3er+1;
            }
            
        }
        s=(x*y/2);
        if (s>0)
        {
            ap=ap+s;
        } else {
            an=an+s;
        }
        c=c+1;
    }
    printf("EL promedio de las superficies pares es: %f y el de las impares: %f\n",ap,an);
    printf("Hay %d puntos en el primer cuadrante, %d en el segundo, %d en el tercero y %d en el cuarto",a1er,a2do,a3er,a4to);
}