#include <stdio.h>

#define M_P 2
#define M_N 64

typedef struct {
    int edad;
    char nombre[M_N];
} persona;

typedef struct {
    persona p[M_P];
    double media;
} gente;

int main(){
    gente g;
    printf("Introduzca su nombre\n");
    scanf("%s", &g.p[0].nombre);
    printf("Introduzca su edad\n");
    scanf("%d", &g.p[0].edad);

    printf("Introduzca su nombre\n");
    scanf("%s", &g.p[1].nombre);
    printf("Introduzca su edad\n");
    scanf("%d", &g.p[1].edad);

    double media = ((double)g.p[0].edad + (double)g.p[1].edad)/2;

    printf("%s tiene %d años y %s tiene %d años.\nLa media de sus edades es de %.1lf años.", g.p[0].nombre, g.p[0].edad, g.p[1].nombre, g.p[1].edad, media);

    return 0;
}