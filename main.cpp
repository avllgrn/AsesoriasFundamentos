#include <stdio.h>
#include <math.h>

int factorial(int n);

int main(void){
    int n;

    printf("Ingresa n ");scanf("%d",&n);

    printf("\n\n\n%d! = %d\n",n,factorial(n));

    return 0;
}

int factorial(int n){
    int i;
    int f;

    f=1;
    i=1;                        // Inicio
    do{
        f = f*i;                // Acumlacion
        i = i+1;                // Inc
    }while( i <= n );           // Final

    return f;
}
