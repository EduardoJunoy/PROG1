#include <stdio.h>

#define TRES 3

int main() {
    int i, j, matriz1[TRES][TRES]={{1,2,3},{4,5,6},{7,8,9}}, matriz2[TRES][TRES]={{7,8,9},{4,5,6},{1,2,3}}, matriz3[TRES][TRES];

    printf("La suma de la matriz:\n");

    for (i=0; i<TRES; i++) {
        for (j=0; j<TRES; j++)
            printf("%d ", matriz1[i][j]);
        printf("\n");
    }

    printf("con la matriz:\n");

    for (i=0; i<TRES; i++) {
        for (j=0; j<TRES; j++)
            printf("%d ", matriz2[i][j]);
        printf("\n");
    }

    printf("es igual a la matriz:\n");

    for (i=0; i<TRES; i++) {
        for (j=0; j<TRES; j++)
            printf("%d ", matriz3[i][j]=matriz1[i][j]+matriz2[i][j]);
        printf("\n");
    }

    return 0;
}