#include <stdio.h>
int main() {
    int l,n=0,s=0;
    printf("Ingrese el valor L: ");
    scanf("%d",&l);
    while (s<=l)
    {
        s=s+n;
        n=n+1;
    }
    printf("N es igual a %d",n);
    return 0;
}