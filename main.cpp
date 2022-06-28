#include <stdio.h>
#include <math.h>

int main(void){
    int i,ini,fin,dec;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    printf("Ingresa dec ");scanf("%d",&dec);

    i=ini;                      // Inicio
    do{
        printf("%d\n",i);

        i = i-dec;              // Inc/Dec
    }while( i >= fin );         // Final

    //printf("Despues de ciclo %d\n",i);

    return 0;
}
