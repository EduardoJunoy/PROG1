#include <stdio.h>
#include <string.h>

#define DIM 8

int main() {
    char nombre1[DIM] = "Ana";
    char nombre2[DIM] = "Anabel";

    printf("Ana vs. Anabel: %d\n", strcmp(nombre1, nombre2));
    printf("Ana vs. Ana: %d\n", strcmp(nombre1, nombre1));
    printf("Anabel vs. Ana: %d\n", strcmp(nombre2, nombre1));

    return 0;
}