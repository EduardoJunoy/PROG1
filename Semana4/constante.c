#include <stdio.h>

int main () {
    int ancho, largo;
    double ancho_p, largo_p;
    const double pies_por_cm = 0.0328;
    

    printf ("Introduce el ancho: ");
    scanf ("%d", &ancho);
    ancho_p = ancho * pies_por_cm;
   
    printf ("Introduce el largo: ");
    scanf ("%d", &largo);
    largo_p = largo * pies_por_cm;

    printf ("%d x %d cm son %.2lf x %.2lf pies.\n", ancho, largo, ancho_p, largo_p);

    return 0;
}