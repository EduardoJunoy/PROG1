#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i, *tabla;
    double media=0;

    printf("Escriba un entero positivo:\n");
    scanf("%d", &n);

    tabla = (int*) malloc(n*sizeof(int));

    if (tabla == NULL)
    {
        printf("Error. No se ha podido reservar memoria.");
        return 1;
    }
    
    for (i=0; i < n; i++)
    {
        printf("Escriba el elemento %d de la tabla:\n", i+1);
        scanf("%d", &tabla[i]);

        media += tabla[i];
    }

    printf("La media de los elementos es %.2lf", media/n);

    free(tabla);
    
    return 0;
}