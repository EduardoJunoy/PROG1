#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char nombre[MAX_STR];
    char primer_apellido[MAX_STR];
    char segundo_apellido[MAX_STR];
} Escritor;

typedef struct {
    Escritor autor;
    char titulo[MAX_STR];
    int anyo;
} Libro;

int main() {
    Libro novela;

    printf("Introduce el nombre del autor: ");
    gets(novela.autor.nombre);
    printf("Introduce el primer apellido del autor: ");
    gets(novela.autor.primer_apellido);
    printf("Introduce el segundo apellido del autor: ");
    gets(novela.autor.segundo_apellido);
  
    printf("Introduce el título del libro: ");
    gets(novela.titulo);
    printf("Introduce el año de publicación del libro: ");
    scanf("%d", &novela.anyo);

    printf("%s fue escrito en %d por %s %s %s.\n", novela.titulo, novela.anyo, novela.autor.nombre, novela.autor.primer_apellido, novela.autor.segundo_apellido);
  
    return 0;
}