#include<stdio.h>
#include<stdlib.h>


int cuadrado(int num);
void cuadradoTipoVoid(int num);
void mostrarDireccionContenido(int *punt);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);


int main(){
    int num, aux, a, b;
    printf("\nIngrese un numero: \n");
    scanf("%d",&num);

        //a) Haga una función que devuelva el cuadrado de un número
        aux = cuadrado(num);    
        printf("\nEl cuadrado es: %d", aux);

        //b) Haga la función anterior, pero devolviendo un tipo void
        cuadradoTipoVoid(num);

        //c)Muestre por pantalla la dirección y el contenido de la variable
        mostrarDireccionContenido(&num);

        //d)Dado dos parámetros, invertir los valores entre ambos
        printf("\nIngrese dos valores:");
        scanf("%d %d", &a, &b);

        invertir(&a, &b);

        printf("\nEl valor de la variable a es: %d", a);
        printf("\nEl valor de la variable b es: %d", b);

        //e)Dado dos parámetros, devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
        ordenar(&a, &b);
        printf("\nVariable con menor valor: %d", a);
        printf("\nVariable con mayor valor: %d", b);

    return 0;
}

int cuadrado(int num){
    return num*num;
}

void cuadradoTipoVoid (int num){
    int cuad;
    cuad = num*num;
    printf("\nEl cuadrado es: %d", cuad);
}

void mostrarDireccionContenido( int *punt){
    printf("\nDireccion de memoria de la variable ingresada: %d", punt);
    printf("\nContenido de la variable ingresada: %d", *punt);
}

void invertir( int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;   
}

void ordenar(int *a, int *b){
    int aux;
    if (*a>*b){
        aux = *b;
        *b = *a;
        *a = aux;
    }
}
