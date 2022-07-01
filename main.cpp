#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int A[50][50], B[50][50], C[50][50], D[50][50];
    int i,j,m1,n1,m2,n2;
    srand(time(NULL));

    printf("Ingresa filas1 ");scanf("%d",&m1);
    printf("Ingresa columnas1 ");scanf("%d",&n1);

    printf("Ingresa filas2 ");scanf("%d",&m2);
    printf("Ingresa columnas2 ");scanf("%d",&n2);

    if(m1==m2 && n1==n2){

        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                A[i][j] = rand()%10;
            }
        }

        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                B[i][j] = rand()%10;
            }
        }

        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                D[i][j] = A[i][j] - B[i][j];
            }
        }

        printf("A\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n");

        printf("B\n");
        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n");

        printf("C\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n");

        printf("D\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                printf("%d\t",D[i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n");

    }
    else{
        printf("Error! No pueden ni sumarse ni restarse... =^(\n");
    }

    return 0;
}
