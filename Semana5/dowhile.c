#include <stdio.h>

#define DIM 10

int main() {
    int i=0, suma=0, total, tabla[DIM];

    do {
        printf("¿Cuántos números quieres sumar (entre 0 y %d)? ", DIM);
        scanf("%d", &total);
    } while(total<0 && total>DIM);

    while(i<total) {
        printf("Introduce un número: ");
        scanf("%d", &tabla[i]);
        suma += tabla[i];
        i++;
    }

    printf("La suma de los %d números: ", total);

    i=0;
    while(i<total) {
        printf("%d ", tabla[i]);
        i++;
    }

    printf("es %d.", suma);

    return 0;
}