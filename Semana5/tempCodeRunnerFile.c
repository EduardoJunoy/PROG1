#include <stdio.h>

#define SALTO 25

int main() {
    int num1, num2, i = 0;

    printf("Introduzca un valor del 1 al 99:\n");
    scanf("%d", &num1);

    while(i < SALTO) {
       printf("\n");  
       i++;
    }
    printf("Introduzca otro valor del 1 al 99:\n");
    scanf("%d", &num2);

    while (num1 != num2) {
    printf("Ese no es el mismo numero que el primero.\nIntroduzca otro valor del 1 al 99:\n");
    scanf("%d", &num2);
    }
    printf("Numero correcto!");