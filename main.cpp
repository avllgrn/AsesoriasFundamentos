#include <stdio.h>

//Declaracion de funciones
void funcion1(void);
void funcion2(void);

//Definicion de programa
int main(void){

    printf("printf en main!\n");
    funcion1();
    funcion2();

    return 0;
}

//Definicion de funciones
void funcion1(void){
    printf("printf en funcion1!\n");
}
void funcion2(void){
    printf("printf en funcion2!\n");
}
