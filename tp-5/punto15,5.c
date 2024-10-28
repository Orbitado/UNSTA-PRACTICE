#include <stdio.h>
int main() {
    int n1,n2,a=0,d;
    printf("Ingrese el primer numero: \n");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);
    d=n1;
    if (n1<n2)
    {
        while (n1<n2-1)
        {
            a=a+(n1+1);
            n1=n1+1;
            printf("%d\n",n1);
        }
        
    }
    printf("Los numeros son: %d y %d.\n Y su suma es %d",d,n2,a);
    
    
    return 0;
}