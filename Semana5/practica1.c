#include <stdio.h>

#define A 2
#define B 10

int main(){
    int veces, i=0;
    double num[11];

    printf("¿Cuántos números quieres leer? (entre 2 y 10): ");
    scanf("%d", &veces);

    while (veces<A || veces>B)
    {
        printf("Error, debes introducir un número entre 2 y 10: \n");
        scanf("%d", &veces);
    }
    
    do
    {
        printf("Introduce el número %d de %d: ", i+1, veces);
        scanf("%lf", &num[i]);
        i++;

    } while (veces>i);

    i=0;
    do
    {
        if (num[veces-1]>num[i])
        {
            printf("El número %.2lf es menor que el número %.2lf\n", num[1], num[veces-1]);
        }
        i++;
                
    } while (veces > i);
    
    return 0;
}
