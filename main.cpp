#include <stdio.h>

int main(void){
    int a[100],b[100],i,aux,mcd,mcm,n;

    printf("Dame a ");scanf("%d",&a[0]);
    printf("Dame b ");scanf("%d",&b[0]);

    //Guardar el mayor de los dos, en a[0]
    //Guardar el menor de los dos, en b[0]
    if(a<b){
        aux = a[0];
        a[0] = b[0];
        b[0] = aux;
    }

    //Algoritmo de Euclides
    i=0;
    while(a[i]%b[i]!=0){
        a[i+1] = b[i];
        b[i+1] = a[i]%b[i];
        i++;
    }
    mcd = b[i];
    mcm = a[0]*b[0]/mcd;

    //Mostrar los vectores del algoritmo
//    n=i;
//    printf("\n\n");
//    for(i=0;i<=n;i++){
//        printf("%d\t%d\n",a[i],b[i]);
//    }


    printf("\n\nmcd = %d",mcd);
    printf("\n\nmcm = %d\n\n",mcm);


    return 0;
}
