#include <stdlib.h>
#include <stdio.h>

int *obtenPares(int * tabla, int tam, int *numPares){
    int i, *tablaPares;

    // Comprueba que los argumentos recibidos son correctos, en caso contrario devuelve NULL
    if (tabla==NULL || tam < 1)
        return NULL;

    // Primero cuenta el número de pares para poder reservar después memoria para una tabla de ese tamaño
    for(i=*numPares=0; i<tam; i++)
    {
        if(tabla[i]%2 == 0)
            (*numPares)++;
    }

    tablaPares = (int *)malloc(*numPares*sizeof(int));

    // Copia en tablaPares los números pares
    for(i=*numPares=0; i<tam; i++)
    {
        if(tabla[i]%2 == 0)
        {
            tablaPares[*numPares]=tabla[i];
            (*numPares)++;
        }
    }
    
    // Devuelve la tabla de pares
    return tablaPares;
}

int main(){
    int tam, i, *tpares, npares, *tabla;

    do
    {
        printf("Cuantos numero quieres leer?:\n");
        scanf("%d", &tam);

        if (tam<1 || tam>128)
        {
            printf("Error, debes introducir un número entre 1 y 128.\n");
        }
    } while (tam<1 || tam>128);
    
    tabla = (int*)malloc(tam*(sizeof(int)));

    if(tabla==NULL)
    {
        printf("La reserva de memoria ha fallado.\n");
        return 1;
    }

    for (i=0; i < tam; i++)
    {
        printf("Introduce el número %d:", i+1);
        scanf("%d", &tabla[i]);
    }

    tpares = obtenPares(tabla, tam, &npares);

    printf("Los números pares son:");

    if (tpares==NULL)
    {
        printf("La reserva de memoria ha fallado.\n");
        free(tabla); //Importante liberar siempre la memoria antes de acabar el programa
        return 1;
    }

    for (i = 0; i < npares; i++)
    {
        printf("%d ", tabla[i]);
    }
    
    free(tabla);
    free(tpares);
    
    return 0;
}