#include <stdio.h>

int main() {
    int i, j, num;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    for (i=2, j=1; i<num; i+=2, j++) {
        printf("El par número %d es %d\n", j, i);
    }

    return 0;
}