#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Hola Mundo \n\n");

    int *punt;
    int valor;

    valor = 10;
    punt = &valor;

    printf("Contenido del puntero: %p  \n\n", punt); 
    printf("Direccion de memoria almacenada por el puntero:%p \n\n", &punt); 
    printf("Direccion de memoria de la variable:%p \n\n", &punt); 
    printf("Direccion de memoria del puntero:%p  \n\n", &punt);  
    printf("Tamanio de memoria utilizado por esa variable usando la funcion sizeof():'%d'  \n\n", (sizeof( int )));

    return 0;
} 