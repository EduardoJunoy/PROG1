#include <stdio.h>
#include <string.h>

#define DIM 8

int main() {
    char nombre1[DIM]="Ana", nombre2[DIM];

    strcpy(nombre2, nombre1);

    printf("nombre1=%s, nombre2=%s\n", nombre1, nombre2);

    return 0;
}