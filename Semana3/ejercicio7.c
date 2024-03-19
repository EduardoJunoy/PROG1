#include <stdio.h>

int main() {
    int divisa;
    double euros;

    printf("Introduzca una cantidad de euros:");
    scanf("%lf", &euros);
    printf("Selecciona una opcion:\n1.Dólar\n2.Yen japones\n3.Libra esterlina\n");
    scanf("\n%d", &divisa);

    switch (divisa) {
        case 1:          
            printf("%.2lf euros son %.2lf dolares\n", euros, euros * 1.17);
            break;
        case 2:      
            printf("%.2lf euros son %.2lf yenes\n", euros, euros * 129.8);
            break;
        case 3:       
            printf("%.2lf euros son %.2lf libras\n", euros, euros * 0.86);
            break;
        default:
            printf("Opcion incorrecta.\n");
    }

    return 0;
}