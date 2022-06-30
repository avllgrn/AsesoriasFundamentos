#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float V[50];
    int i,n;
    srand(time(NULL));

    printf("Ingresa n ");scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("V[%d] = %f\n",i,V[i]);
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        V[i] = 0;
    }

    for(i=0;i<n;i++){
        printf("V[%d] = %f\n",i,V[i]);
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        printf("Ingresa V[%d] ",i);
        scanf("%f",&V[i]);
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        printf("V[%d] = %f\n",i,V[i]);
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        V[i] = rand()%10;
    }

    for(i=0;i<n;i++){
        printf("V[%d] = %f\n",i,V[i]);
    }
    printf("\n\n");

    return 0;
}
