#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int M[50][50];
    int i,j,m,n;
    srand(time(NULL));

    printf("Ingresa filas ");scanf("%d",&m);
    printf("Ingresa columnas ");scanf("%d",&n);

    //Matriz Identidad
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j)
                M[i][j] = 1;
            else
                M[i][j] = 0;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");


    return 0;
}
