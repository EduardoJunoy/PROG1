#include <stdio.h>

#define DIM 3

void incrementa(int *p, int num) {
    int i;
    for (i=0; i<num; i++)
        p[i]++;
}

int main() {
    int i, datos[DIM] = {2,3,5};

    incrementa(datos, DIM);

    for (i=0; i<DIM; i++)
        printf("%d ", datos[i]);

    return 0;
}