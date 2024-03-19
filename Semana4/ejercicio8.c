#include <stdio.h>
#include <string.h>

int main(){
    char cadena1[100], cadena2[100];

    printf("Introduce una cadena: ");
    gets(cadena1);    

    printf("Introduce otra cadena: ");
    gets(cadena2);

    printf("El valor devuelto por la comparacion de las cadenas es: %d \n", strcmp(cadena1, cadena2));

    return 0;
}