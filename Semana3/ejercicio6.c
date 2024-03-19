#include <stdio.h>

int main() {
    int divisa;
    double euros;

    printf("Introduzca una cantidad de euros:");
    scanf("%lf", &euros);
    printf("Selecciona una opcion:\n{D}ólar\n{Y}en japones\n{L}ibra esterlina\n");
    scanf("\n%c", &divisa);

    switch (divisa) {
        case 'D':
        case 'd':          
            printf("%.2lf euros son %.2lf dolares\n", euros, euros * 1.17);
            break;
        case 'Y':
        case 'y':          
            printf("%.2lf euros son %.2lf yenes\n", euros, euros * 129.8);
            break;
        case 'L':
        case 'l':        
            printf("%.2lf euros son %.2lf libras\n", euros, euros * 0.86);
            break;
        default:
            printf("Opcion incorrecta.\n");
    }

    return 0;
}