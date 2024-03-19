#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char autor[MAX_STR];
    char titulo[MAX_STR];
    int anyo;
} Libro;

int main () {
    Libro novela = {"Mario Vargas Llosa", "El héroe discreto", };
    
    printf("Introduzca el año de publicación de %s, de %s: ", novela.titulo, novela.autor);
    scanf("%d", &novela.anyo);

    printf("%s fue escrito por %s en %d.\n", novela.titulo, novela.autor, novela.anyo);   
    return 0;
}