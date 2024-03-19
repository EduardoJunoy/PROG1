#include <stdio.h>
#define A 10

int main(){
    int longitud, lista[A], i, j, n, r, repetido;
    
    printf("Escribe la longitud de la lista: \n");
    scanf("%d", &longitud);

    for (; longitud<=5 && longitud>=10; i++)
    {
        printf("Error, el número introducido no está entre 5 y %d.\n", A);
        printf("Escribe la longitud de la lista: \n");
        scanf("%d", &longitud);
    }
    
    for (i=0; i < longitud; i++)
    {
        printf("Escribe el número %d-esimo de la lista:\n", i+1);
        scanf("%d", &lista[i]);
    }
    
    for ( i = 0; i < longitud; i++)
    {
        n=lista[i];
        repetido=0;

        for ( j=0; j<i; j++ )
        {
            if ( lista[j] == n )
            {
				repetido = 1;
            }
        }

		if ( repetido == 0 )
        {
            for (r=1, j=i+1; j<longitud; j++ )
            {
                if (lista[j] == n)
                {
                    r++;
                }
            }		
            printf("Numero de veces que %d esta en la lista: %d\n", n, r);
        }
    }
    return 0;
}