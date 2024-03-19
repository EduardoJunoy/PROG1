#include <stdio.h>

int main(){
    char i1, i2;
    double a1, a2, peso1, peso2;

    printf("Por favor, introduce la inicial de la primera persona:");
    scanf("%c", &i1);
    printf("Por favor, introduce la altura (cm) de la primera persona:");
    scanf("%lf", &a1);
    printf("Por favor, introduce la inicial de la segunda persona:");
    scanf("\n%c", &i2);
    printf("Por favor, introduce la altura (cm) de la segunda persona:");
    scanf("%lf", &a2);

    peso1 = a1 - 100 - (a1 - 150)/4;
    peso2 = a2 - 100 - (a2 - 150)/4;

    printf("El peso ideal de %c es de %.1lf kg.\nEl peso ideal de %c es de %.1lf kg.\nLa media de ambos pesos ideales es %.1lf.", i1, peso1, i2, peso2, (peso1 + peso2)/2 );
    return 0;
}