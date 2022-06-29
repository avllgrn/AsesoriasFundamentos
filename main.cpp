#include <stdio.h>
#include <math.h>

int main(void){
    int i,ini,fin;
    int p;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);

    p=1;
    i=ini;                      // Inicio
    do{
        //printf("i=%d\tp=%d\n",i,p);

        p = p*i;                // Acumlacion
        i = i+1;                // Inc/Dec
    }while( i <= fin );         // Final

    //printf("\n\n\ni=%d\tp=%d\n",i,p);
    printf("\n\n\np=%d\n",p);

    return 0;
}
