#include <stdio.h>
#include <math.h>

int main(void){

    float r,a,p;

    //1. Pedir dato(s)
    printf("Ingresa el radio ");
    scanf("%f",&r);

    //2. Calcular formula(s)
    a = M_PI * pow(r,2);
    p = 2 * M_PI * r;

    //3. Mostrar resultado(s)
    printf("Radio = %f\n",r);
    printf("Area = %f\n",a);
    printf("Perimetro = %f\n",p);

    return 0;
}
