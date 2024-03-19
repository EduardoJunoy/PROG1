#include <stdio.h>

#define DIM 3

int main() {
    int datos[DIM];

    printf("Introduce los números de la tabla: ");
    scanf("%d", datos);

    printf("Los elementos de la tabla son %d, %d y %d.\n", datos[0], datos[1], datos[2]);
    return 0;
}