#include <stdio.h>

void operacion(double a, double b){    
    double area;
    area = (b * a) /2;
    printf("El area del triangulo es %.2lf.\n", area);
}

int main(){
    double base, altura;
    
    printf("Introduzca la base del triangulo: \n");
    scanf("%lf", &base);
    printf("Introduzca la altura del triangulo: \n");
    scanf("%lf", &altura);
    operacion(base, altura);
    
    return 0;
}