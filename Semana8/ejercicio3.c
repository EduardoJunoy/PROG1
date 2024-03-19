#include <stdio.h>

double operacion(double a, double b){    
    double area;
    area = (b * a) /2;
    return area;
}

int main(){
    double base, altura, area;
    
    printf("Introduzca la base del triangulo: \n");
    scanf("%lf", &base);
    printf("Introduzca la altura del triangulo: \n");
    scanf("%lf", &altura);
    
    area = operacion(base, altura);
    printf("El area del triangulo es %.2lf.\n", area);
    
    return 0;
}