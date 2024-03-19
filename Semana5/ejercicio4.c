#include <stdio.h>

#define SALTO 25

int main() {
    int num1, num2, i = 0;

    printf("Introduzca un valor del 1 al 99:\n");
    scanf("%d", &num1);

    do {
       printf("\n");  
       i++;
    } while (i < SALTO);

    printf("Introduzca otro valor del 1 al 99:\n");
    scanf("%d", &num2);

    while (num1 != num2) {
        if (num2 > num1){
            printf("Ese numero es mayor que el primero.\nIntroduzca otro valor del 1 al 99:\n");
            scanf("%d", &num2);
        }
        else{
            printf("Ese numero es menor que el primero.\nIntroduzca otro valor del 1 al 99:\n");
            scanf("%d", &num2);
        }
    }
    printf("Numero correcto!");

    return 0;
}