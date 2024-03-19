#include <stdio.h>

int main(){
    int a, r, i, terminos, total[64], suma=0, potencia=1;
    
    printf("Introduzca un valor para a:\n");
    scanf("%d", &a);
    printf("Introduzca un valor para r:\n");
    scanf("%d", &r);
    printf("Introduzca un valor para el numero de terminos:\n");
    scanf("%d", &terminos);

    total[0]=a;

    for (i=0; i<terminos-1; i++)
    {
        potencia = potencia * r;
        total[i+1]=a*potencia;
    }

    for (i=0; i < terminos; i++)
    {
        suma+=total[i];
    }
    
    printf("El total es: %d\n", suma);

    return 0;
}