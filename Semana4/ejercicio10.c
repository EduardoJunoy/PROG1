#include <stdio.h>

typedef struct {
    int cociente, resto, dividendo, divisor;
} division;

int main () {
    division resultado = { resultado.cociente, resultado.resto };
    printf("Introduzca el dividendo: ");
    scanf("\n%d", &resultado.dividendo);
    printf("Introduzca el divisor: ");
    scanf("%d", &resultado.divisor);

    resultado.cociente = resultado.dividendo/resultado.divisor;
    resultado.resto = resultado.dividendo%resultado.divisor;

    printf("El cociente de la division es: %d\nEl resto es: %d", resultado.cociente, resultado.resto);

    return 0;
}