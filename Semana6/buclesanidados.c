#include <stdio.h>

#define DIMI 2
#define DIMJ 3

int main() {
    int i, j;

    for (i=0; i<DIMI; i++)
        for (j=0; j<DIMJ; j++)
            printf("%d %d\n", i, j);

    return 0;
}