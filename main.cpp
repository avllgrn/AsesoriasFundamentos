#include <stdio.h>

int main(void){

    int a,b,c;

    //1. Pedir datos
    printf("Ingresa a ");
    scanf("%d",&a);
    printf("Ingresa b ");
    scanf("%d",&b);

    //2. Calcular formula(s)
    c=a+b;

    //3. Mostrar resultado(s)
    printf("%d + %d = %d",a,b,c);

    return 0;
}
