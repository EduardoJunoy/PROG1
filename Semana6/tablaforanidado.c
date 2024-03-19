#include <stdio.h>

#define FIL 2
#define COL 3

int main() {
    int i, j, matriz[FIL][COL]={{1,4,2},{3,5,9}};

    for (i=0; i<FIL; i++) {
        for (j=0; j<COL; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}