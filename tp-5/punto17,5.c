#include <stdio.h>
int main() {
    int n,x,a=0;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    x=n;
    n=n-1;
    while (n>0)
    {
        x=(x*n);
        printf("%d* ",n);
        n=n-1;
    }
    printf("Es igual a: %d",x);
    return 0;
}