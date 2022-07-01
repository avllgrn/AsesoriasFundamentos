#include <stdio.h>

int main(void){
    int a,b,may,men,aux,mcm;

    printf("Dame a ");scanf("%d",&a);
    printf("Dame b ");scanf("%d",&b);

    if(a>b){
        may = a;
        men = b;
    }
    else{
        may = b;
        men = a;
    }

    while(may%men!=0){
        aux=may%men;
        may=men;
        men=aux;
        //printf("mcd = %d\n",men);
    }

    mcm = a*b/men;

    printf("\n\nmcd = %d",men);
    printf("\n\nmcm = %d",mcm);

    return 0;
}
