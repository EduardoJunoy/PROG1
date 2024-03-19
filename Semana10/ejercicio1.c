#include <stdio.h>

int main(){
    int longitud;
    char cadena[124], *p;

    printf("Introduzca la cadena para hallar su longitud:\n");
    gets(cadena);

    for (longitud=0, p=cadena; *p ; p++) // *p significa que el puntero apunta a determinada letra
    {
        longitud++;
    }

    printf("La longitud de la cadena es: %d", longitud);

    return 0;
}