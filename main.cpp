#include <stdio.h>
#include <math.h>

int main(void){
    int i,n;
    int f;

    printf("Ingresa n ");scanf("%d",&n);

    f=1;
    i=1;                        // Inicio
    do{
        //printf("i=%d\tf=%d\n",i,f);

        f = f*i;                // Acumlacion
        i = i+1;                // Inc
    }while( i <= n );           // Final

    //printf("\n\n\ni=%d\tf=%d\n",i,f);
    printf("\n\n\n%d! = %d\n",n,f);

    return 0;
}




