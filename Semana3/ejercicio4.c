#include <stdio.h>

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;
    char espacio;

    printf("Por favor, introduce la primera fecha:");
    scanf("%d%c%d%c%d", &dia1, &espacio, &mes1, &espacio, &ano1);
    printf("Por favor, introduce la segunda fecha:");
    scanf("%d%c%d%c%d", &dia2, &espacio, &mes2, &espacio, &ano2);

    if (ano1 > ano2){
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
    }
    else if (ano1 == ano2){
        if (mes1 > mes2)
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
        else if (dia1 > dia2)
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
        else if (dia1 < dia2)
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
        else
            printf("Las dos fechas son iguales");
    }else{
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
    }
    return 0;
}