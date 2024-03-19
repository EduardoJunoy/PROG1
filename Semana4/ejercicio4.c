#include <stdio.h>

int main(){
    double exp [3][5] = {{102.6, 120.8, 87.8, 96.5, 136.2}, {112.4, 100.8, 81.4, 93.5, 116.2}, {103.7, 97.6, 87.9, 98.6, 106.3}};

    printf("Media experiencia últimas 5 partidas con Lux: %.2lf", (exp[0][0] + exp[0][1] + exp[0][2] + exp[0][3] + exp[0][4]) /5);
    printf("\nMedia experiencia últimas 5 partidas con Garen: %.2lf", (exp[1][0] + exp[1][1] + exp[1][2] + exp[1][3] + exp[1][4]) /5);
    printf("\nMedia experiencia últimas 5 partidas con Volibear: %.2lf", (exp[2][0] + exp[2][1] + exp[2][2] + exp[2][3] + exp[2][4]) /5);

    return 0;
}