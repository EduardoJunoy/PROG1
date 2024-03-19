#include <stdio.h>

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;
    char espacio;

    printf("Introduce la fecha de nacimiento del primer usuario separada por espacios:");
    scanf("%d%c%d%c%d", &dia1, &espacio, &mes1, &espacio, &ano1);
    printf("Introduce la fecha de nacimiento del segundo usuario separada por espacios:");
    scanf("%d%c%d%c%d", &dia2, &espacio, &mes2, &espacio, &ano2);

    if (ano1 == ano2 && mes1 == mes2 && dia1 == dia2){
            printf("Felicidades! Ambos habeis nacido el mismo dia.");
    }
    else if (ano1 != ano2 && mes1 == mes2 && dia1 == dia2){
            printf("Ambos cumplis anyos el mismo dia. Os llevais %d anyos de diferencia.", ano1-ano2);
    }else{
            printf("Vaya, no compartis cumpleanyos.");
    }
    return 0;
}