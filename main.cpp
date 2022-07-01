#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i,j,m,n;

    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("i=%d j=%d\n",i,j);
        }
    }

    printf("\n\n\n");
    system("pause");
    system("cls");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("i%dj%d\t",i,j);
        }
        printf("\n");
    }


    printf("\n\n\n");
    return 0;
}
