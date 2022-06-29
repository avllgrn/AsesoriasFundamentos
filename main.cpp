#include <stdio.h>
#include <math.h>

int main(void){
    int i,ini,fin;
    int s;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);

    s=0;
    i=ini;                      // Inicio
    do{
        //printf("i=%d\ts=%d\n",i,s);

        s = s+i;                // Acumlacion
        i = i+1;                // Inc/Dec
    }while( i <= fin );         // Final

    //printf("\n\n\ni=%d\ts=%d\n",i,s);
    printf("\n\n\ns=%d\n",s);

    return 0;
}
