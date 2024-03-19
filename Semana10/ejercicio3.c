#include <stdio.h>
#define TAM 2
#define TAMTABLA 10
void incrementaElementos(int *tabla, int dimension, int valor){
    int i;

    for (i = 0; i < dimension; i++)
    {
        tabla[i]+=valor;
    }
}

int main(){
    int incremento=TAM, i, tabla[TAMTABLA]={1,2,3,4,5,6,7,8,9,10};

    printf("La tabla tiene el contenido:\n");

    for (i = 0; i < TAMTABLA; i++)
    {
        printf(" %d", tabla[i]);
    }
    
    incrementaElementos(tabla, TAMTABLA, incremento);
    
    printf("\nLa tabla tiene el contenido:\n");

    for (i = 0; i < TAMTABLA; i++)
    {
        printf(" %d", tabla[i]);
    }
        
    return 0;
}