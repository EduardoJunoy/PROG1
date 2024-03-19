#include <stdio.h>

int main(){
    char sexo;
    int cp;
    int hp;
    float peso;
    float altura;
    int caramelos;

    printf("Introduce el sexo (M/F):");
    scanf("%c", &sexo);
    printf("Introduce los puntos de combate:");
    scanf("%d", &cp);
    printf("Introduce los puntos de salud:");
    scanf("%d", &hp);
    printf("Introduce el peso:");
    scanf("%f", &peso);
    printf("Introduce la altura:");
    scanf("%f", &altura);
    printf("Introduce el número de caramelos:");
    scanf("%d", &caramelos);

    printf(" Solo para informarte, te repito los datos que acabas de introducir: \n Sexo: %c \n CP: %d \n HP: %d \n Peso: %f \n Altura: %f \n Caramelos: %d", sexo, cp, hp, peso, altura, caramelos);
    return 0;
}