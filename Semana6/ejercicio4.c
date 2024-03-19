#include <stdio.h>
#define TAM 10

int main(){
    int tabla[TAM], i, j, suma=0;

    for(i=0, j=0; i<TAM; i++)
    {
        printf("Introduce un numero: \n");
        scanf("%d", &tabla[i]);

        if (tabla[i]==0)
            break;
        
        else if (tabla[i]<0)
            j++;
        
        else
            suma += tabla[i];
    }
    printf("La suma de los numeros es: %d.\nSe han leido %d numeros y %d de ellos eran negativos", suma, i, j);

    return 0;
}