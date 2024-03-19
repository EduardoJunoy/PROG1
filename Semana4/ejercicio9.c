#include <stdio.h>

int main(){
    char cad1[128],cad2[128];

    printf("Introduzca una cadena para la primera variable: ");
    gets(cad1);

    strcpy(cad2, cad1);
    printf("La segunda variable ahora tambien es: %s", cad2);

    printf("\nLa duferencia del valor entre las dos oraciones es: %d", strcmp(cad1, cad2));

    return 0;
}