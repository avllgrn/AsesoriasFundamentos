#include <stdio.h>
#include <math.h>

int factorial(int n);

int main(void){
    int i,n;
    float x,s;

    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);

    s=0;
    i=0;                                // Inicio
    do{
        //printf("i=%d\ts=%f\n",i,s);

        s = s + pow(x,i)/factorial(i);  // Acumlacion
        i = i+1;                        // Inc
    }while( i <= n );                   // Final

    //printf("\n\n\ni=%d\ts=%f\n",i,s);
    printf("\n\n\ne^(%f) = %f\n",x,s);

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
