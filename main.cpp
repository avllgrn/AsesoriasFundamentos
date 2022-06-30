#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int A[50], B[50], C[50], D[50];
    int i,n1,n2;
    srand(time(NULL));

    printf("Ingresa n1 ");
    scanf("%d",&n1);
    printf("Ingresa n2 ");
    scanf("%d",&n2);
    printf("\n\n");

    if(n1!=n2){
        printf("Error! No pueden sumarse ni restarse...=^(\n");
    }
    else{
        for(i=0; i<n1; i++)
            A[i] = rand()%10;

        for(i=0; i<n2; i++)
            B[i] = rand()%10;

        for(i=0; i<n1; i++)
            C[i] = A[i] + B[i];

        for(i=0; i<n1; i++)
            printf("%d + %d = %d\n",A[i],B[i],C[i]);

        printf("\n\n");

        for(i=0; i<n1; i++)
            D[i] = A[i] - B[i];

        for(i=0; i<n1; i++)
            printf("%d - %d = %d\n",A[i],B[i],D[i]);

        printf("\n\n");
    }

    return 0;
}
