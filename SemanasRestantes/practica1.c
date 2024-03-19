#include <stdio.h>
#define TAM 10
int main (){
    int i, lista[TAM], longitud, j, n, r, repetido;

    do{
        printf("Introduzca la longitud de la lista:");
        scanf("%d", &longitud);
        if(longitud<5 || longitud>10)
            printf("Error. La longitud debe estar entre 5 y 10\n");
    } while (longitud<5 || longitud>10);

    for (i = 0; i < longitud; i++){
        printf("Escribe el numero %d de la lista:", i+1);
        scanf("%d", &lista[i]);
    }
    for ( i = 0; i < longitud; i++){
        n=lista[i];
        repetido=0;
        for ( j=0; j<i; j++ ) 
                	if ( lista[j] == n )
				repetido = 1;
			
		if ( repetido == 0 )
                {
                    r = 1;
                    for ( j=i+1; j<longitud; j++ )
                            if ( lista[j] == n ) 
                                r++;
			
                    printf("Numero de veces que %d esta en la lista: %d\n", n, r);
                }

    }
    return 0;
}