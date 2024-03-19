#include <stdio.h>

#define DIM 5

int main() {
    int i, num[DIM]={3,2,5,4,9};
    double media;

    for (i=0, media=.0; i<DIM; i++) {
        media += num[i];
    }

    printf("Media = %.1lf", media/DIM);

    return 0;
}