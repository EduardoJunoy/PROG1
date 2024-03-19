#include <stdio.h>
#include <string.h>

#define TAM 124

int minus_a_mayus(char * cadena)
{
    int tamano;

    for (tamano=0; *cadena!=0; cadena++, tamano++)
        *cadena+='A' - 'a';

    return tamano;
}

int main(){
    char cadena[TAM];
    int tamano;
    
    printf("Introduzca una cadena en minusculas:\n");
    gets(cadena);

    tamano = minus_a_mayus(cadena);

    printf("La cadena en mayusculas es: %s\nSu tamano es: %d", cadena, tamano);

    return 0;
}