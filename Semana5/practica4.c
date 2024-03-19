#include <stdio.h>

int main(){
    int entero[10], i=0, i2=0;

    do
    {
        printf("Introduzca un número entero (0 para terminar): \n");
        scanf("%d", &entero[i]);
        i++;

    } while ((entero[i-1]!=0) && (i<10));

    if (i==1)
    {
        printf("No se ha introducido ningún número. \n");
    }
    else
    {
            
            printf("Los números tecleados son: ");

            while (i2<i)
            {
                printf("%d ", entero[i2]);
                i2++;
            }
    }
    
    return 0;
}