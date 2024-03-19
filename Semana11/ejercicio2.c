#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i, *tabla, *datos_nuevo;
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

    printf("La media de los elementos es %.2lf\n", media/n);

    datos_nuevo = (int*) malloc(n*sizeof(int));

    for (i=0; i < n; i++)
    {
        datos_nuevo[i]=tabla[i];
    }
    
    free(tabla);

    tabla=datos_nuevo;

    printf("Introduce un elemento adicional:\n");
    scanf("%d", datos_nuevo+1);

    media=(media+(*(datos_nuevo+1)))/(n+1);
    
    printf("La media actual es: %.2lf", media);

    free(datos_nuevo);

    return 0;
}