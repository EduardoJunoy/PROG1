#include <stdio.h>
#include <stdlib.h>

double** malloc_matriz_double(int m, int n) {
    int i, j;
    double **matriz;

    if ((matriz = (double**) malloc(m*sizeof(double*))) == NULL)
        return NULL;

    for (i=0; i<m; i++) {
        if ((matriz[i] = (double*) malloc(n*sizeof(double))) == NULL) {
            free_matriz_double(matriz, i);
            return NULL;
        }
    }

    return matriz;
}

void free_matriz_double(double **matriz, int m) {
    int i;

    for (i=0; i<m; i++)
        free(matriz[i]);

    free(matriz);
}

int main() {
    int i, j, estudiantes, examenes;
    double **notas;

    printf("¿Cuántos estudiantes hay en tu clase? ");
    scanf("%d", &estudiantes);
    printf("¿Cuántos exámenes habéis hecho? ");
    scanf("%d", &examenes);

    if ((notas = malloc_matriz_double(examenes, estudiantes)) == NULL) {
        printf("malloc_matriz_double() ha fallado.");
        return 1;
    }

    // Código para almacenar las notas de los estudiantes para cada examen.
   
    free_matriz_double(notas, examenes);

    return 0;
}