#include <stdio.h>

int main() {
    char divisa;
    double euros;

    printf("Introduzca una cantidad de euros:");
    scanf("%lf", &euros);
    printf("Selecciona una opcion:\nA.Dólar\nB.Yen japones\nC.Libra esterlina\n");
    scanf("\n%c", &divisa);

    switch (divisa) {
        case 'a':    
        case 'A':          
            printf("%.2lf euros son %.2lf dolares\n", euros, euros * 1.17);
            break;
        case 'b':    
        case 'B':      
            printf("%.2lf euros son %.2lf yenes\n", euros, euros * 129.8);
            break;
        case 'c':    
        case 'C':       
            printf("%.2lf euros son %.2lf libras\n", euros, euros * 0.86);
            break;
        default:
            printf("Opcion incorrecta.\n");
    }

    return 0;
}