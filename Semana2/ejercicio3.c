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

    printf("Tamaño variable sexo: %d \n Tamaño variable CP: %d \n Tamaño variable HP: %d \n Tamaño variable peso: %d \n Tamaño variable altura: %d \n Tamaño variable caramelos: %d", sizeof(char), sizeof(int), sizeof(int), sizeof(float), sizeof(float), sizeof(int));

    return 0;
}