#include <stdio.h>
#include <math.h>

int main() {
    int i, num, esPrimo=1;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            
            break;
        }
    }

    if (esPrimo)
        printf("%d es primo.", num);
    else
        printf("%d no es primo", num);

    return 0;
}