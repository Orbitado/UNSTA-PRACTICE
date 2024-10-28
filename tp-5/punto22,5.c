#include <stdio.h>
void main () {
    int c=1,ar=1,ap=100;
    while (c<=30)
    {
        ar=ar*2;
        ap=ap+100;
        if (ar>ap)
        {
            printf("Lo supera en el dia %d\n",c);
        }
        c=c+1;
    }
    printf("El rico al final posee $%d, y el pobre $%d",ar,ap);
}