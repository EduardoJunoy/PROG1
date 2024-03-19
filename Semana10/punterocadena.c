#include <stdio.h>
#include <string.h>
#define TAM 124

void agregarTXT(char *cadena){
    int i=strlen(cadena);
    
    cadena[i]='.';
    i++;
    cadena[i]='t';
    i++;
    cadena[i]='x';
    i++;
    cadena[i]='t';
    i++;
    cadena[i]=0;    
    
}

int main(){
    char cadena[TAM];

    printf("Introduce la cadena a la que le quieres añadir la expresión \".txt:\" \n");
    gets(cadena);

    agregarTXT(cadena);

    printf("Su cadena ahora se llama: %s", cadena);

    return 0;
}