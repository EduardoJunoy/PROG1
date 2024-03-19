#include <stdio.h>

int main() {
    double euros;
    double dolares;
   
    printf("Introduzca cantidad en dólares: ");
    scanf("%lf", &dolares);
   
    euros = dolares * 0.706;
    printf("%.2lf dólares son %.2lf euros.\n", dolares, euros);
   
    return 0;
}