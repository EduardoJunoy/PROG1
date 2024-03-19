#include <stdio.h>
#include <stdlib.h>
#include <math.h>

short esPrimo(long x);
long *leerFichero(char *nombreFichero, long *n);

int main(){
    char nombreFichero[128];
    long *x=NULL, n, i;

    printf("\nIntroduzca el nombre del fichero:\n");
    scanf("%s", nombreFichero);

    leerFichero(nombreFichero, n);

}

long *leerFichero(char *nombreFichero, long *n){
    FILE *fp=NULL;
    int *n, valores;

    /*abre, lee, cierra y sus respectivos controles de errores*/ 

    fp=fopen(nombreFichero, "r");

    fscanf(fp, "%ld", &valores);

    fclose(fp);


}