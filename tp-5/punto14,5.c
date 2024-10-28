#include <stdio.h>
int main() {
    int n,c=0;
    printf("Ingrese el numero natural: ");
    scanf("%d",&n);
    while (c<10)
    {
        if (n%10==c)
        {
            printf("%d es par\n",n);
            c=10;
        } else {
            c=c+2;
        }
        
    }
    
    return 0;
}