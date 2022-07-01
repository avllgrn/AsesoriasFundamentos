#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int M[50][50], MT[50][50];
    int i,j,m,n,mT,nT;
    srand(time(NULL));

    printf("Ingresa filas ");scanf("%d",&m);
    printf("Ingresa columnas ");scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            M[i][j] = rand()%10;
        }
    }


    //Matriz Transpuesta
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            MT[j][i] = M[i][j];
        }
    }
    mT = n;
    nT = m;


    printf("M\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    printf("MT\n");
    for(i=0;i<mT;i++){
        for(j=0;j<nT;j++){
            printf("%d\t",MT[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    return 0;
}
