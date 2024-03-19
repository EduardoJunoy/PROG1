
#include <stdio.h>
#include <stdlib.h>

#define MAX 128

int * obtenPares(int * tabla, int tam, int *numPares)
{
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
    
    // Reserva memoria para la tabla de pares del tamaño obtenido
    tablaPares = (int *)malloc(*numPares*sizeof(int));
    // Si no se ha podido reservar la memoria correctamente devuelve NULL
    if (tablaPares == NULL)
        return NULL;
        
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



int main()
{
    int num, *tabla, *tPares, nPares, i;
    do
    {
        printf("¿Cuántos números quieres leer? ");
        scanf("%d", &num);
        if (num<1 || num>128)
            printf("Error, debes introducir un número entre 1 y %d\n", MAX);
    }while(num<1 || num>128);
    
    // Reserva memoria para una tabla del tamaño introducido
    tabla=(int *)malloc(num*sizeof(int));
    if (tabla==NULL)
    {
        printf("ERROR");
        return 1;
    }
    
    // Lee los números y los guarda en la tabla
    for(i=0; i<num; i++)
    {
        printf("Introduce el número %d: ", i+1);
        scanf("%d", &tabla[i]);
    }
    
    // Llama a la función para obtener la tabla de pares
    tPares=obtenPares(tabla, num, &nPares);
    
    if (tPares==NULL)
    {
        printf("ERROR");
        free(tabla); //Importante liberar siempre la memoria antes de acabar el programa
        return 1;
    }
    
    // Muestra los pares por pantalla
    printf("Los números pares son: ");
    for(i=0; i<nPares; i++)
        printf("%d ", tPares[i]);
        
    //Importante liberar siempre la memoria antes de acabar el programa
    free(tPares);
    free(tabla);
    
    return 0;
    
}
