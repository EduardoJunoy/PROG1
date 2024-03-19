#include <stdio.h>
#include <math.h>

int main() {
    int i, num, esPrimo=1;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    for (i=2; i<=sqrt(num) && esPrimo==0; i++)
        if (num%i == 0)
            esPrimo = 0;

    if (esPrimo)
        printf("%d es primo.", num);
    else
        printf("%d no es primo", num);

    return 0;
}