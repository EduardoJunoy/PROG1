#include <stdio.h>
int main()
{
    double temporadas;
    double capitulos;
    double duracion;
    double intro;
    double total;

    printf("Piensa en una serie que hayas visto...\n ¿Cuantas temporadas tiene?");
    scanf("%lf", &temporadas);
    printf("¿Cuantos capítulos de media cada temporada?");
    scanf("%lf", &capitulos);
    printf("¿Cuantos minutos duran aproximadamente los capítulos?");
    scanf("%lf", &duracion);
    printf("¿Y su intro?");
    scanf("%lf", &intro);

    total = temporadas * capitulos * (duracion - intro) / 60;

    printf("¡En total has invertido unas %lf horas en ver la serie!", total);

    return 0;
}