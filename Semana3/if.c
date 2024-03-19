#include <stdio.h>

int main() {
    int altura;
    double peso, indice;
 
    printf("Introduce tu peso (kg): ");
    scanf("%lf", &peso);
    printf("Introduce tu altura (cm): ");
    scanf("%d", &altura);

    indice = 10000 * peso / (altura * altura);
    printf("Tu índice de masa corporal es %.2lf\n", indice);

    if (indice < 18.5)
    {
        printf("Tienes bajo peso\n");
        printf("El límite inferior de índice de masa corporal es 18.5\n");
    }

    return 0;
}