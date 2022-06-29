#include <stdio.h>
#include <math.h>

int main(void){
    int i,n;
    float x,s;

    printf("Ingresa x ");scanf("%f",&x);
    printf("Ingresa n ");scanf("%d",&n);

    s=0;
    i=0;                        // Inicio
    do{
        printf("i=%d\ts=%f\n",i,s);

        s = s + pow(x,i);       // Acumlacion
        i = i+1;                // Inc
    }while( i <= n );           // Final

    //printf("\n\n\ni=%d\ts=%f\n",i,s);
    printf("\n\n\ns=%f\n",s);

    return 0;
}
