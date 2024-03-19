#include <stdio.h>

#define DIM 10

int main() {
    int i=0, total, tabla[DIM];


    do {
    printf("Cuantos valores quieres que se muestren por pantalla (entre 0 y %d)? ", DIM);
    scanf("%d", &total);

        if (total<0 || total>DIM)
            printf("Error. Debes introducir un número entre 0 y %d\n", DIM);

    } while (total<0 || total>DIM);

    while(i<total) {
        printf("Introduce un numero: ");
        scanf("%d", &tabla[i]);
        i++;
    }

    i=0;
    printf("Los introducidos numeros son:");

    while (i<total) {
        printf(" %d,", tabla[i]);
        i++;
    }    
    return 0;
}