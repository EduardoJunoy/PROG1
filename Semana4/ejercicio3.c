#include <stdio.h>

#define PART 5

int main(){
    double exp1 [PART] = {102.6, 120.8, 87.8, 96.5, 136.2};
    double exp2 [PART] = {112.4, 100.8, 81.4, 93.5, 116.2};
    double exp3 [PART] = {103.7, 97.6, 87.9, 98.6, 106.3};


    printf("Media experiencia últimas 5 partidas con Lux: %.2lf", (exp1[0] + exp1[1] + exp1[2] + exp1[3] + exp1[4]) /5);
    printf("\nMedia experiencia últimas 5 partidas con Garen: %.2lf", (exp2[0] + exp2[1] + exp2[2] + exp2[3] + exp2[4]) /5);
    printf("\nMedia experiencia últimas 5 partidas con Volibear: %.2lf", (exp3[0] + exp3[1] + exp3[2] + exp3[3] + exp3[4]) /5);

    return 0;
}