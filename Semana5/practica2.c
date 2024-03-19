#include <stdio.h>

#define A 2
#define B 10

int main(){
    int num[B], veces, i=0;

    printf("¿Cuántos números quieres teclear? (entre %d y %d): ", A, B);
    scanf("%d", &veces);

    while (veces<A || veces>B)
    {
            printf("Error, debes introducir un número entre %d y %d: ", A, B);
            scanf("%d", &veces);
    }
    
    while (i<veces)
    {
        printf("Introduce el número %d de %d: ", i+1, veces);
        scanf("%d", &num[i]);
        i++;
    }
    
    printf("Los números pares son: ");

    i=0;
    while(i<veces)
    {
        if (num[i]%2==0)
        {
            printf("%d ", num[i]);
        }
        i++;
    }

    printf("Los números impares son: ");

    i=0;
    while(i<veces)
    {
        if (num[i]%2!=0)
        {
            printf("%d ", num[i]);
        }
        i++;
    }

    return 0;
}