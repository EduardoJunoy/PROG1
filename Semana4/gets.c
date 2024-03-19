#include <stdio.h>

#define DIM 8

int main() {
    char nombre[DIM];
    char ciudad[DIM];

    printf("Introduce tu nombre: ");
    gets(nombre);

    printf("Introduce tu ciudad de residencia: ");
    scanf("%s", ciudad);

    printf("Hola, %s. Vives en %s.\n", nombre, ciudad);

    return 0;
}