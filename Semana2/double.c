#include <stdio.h>

int main() {
    double euros;
    double dolares;
   
    printf("Introduzca cantidad en dólares: ");
    scanf("%o", &dolares);
   
    euros = dolares * 0.859;
    printf("%o dolares son %o euros.\n", dolares, euros);
   
    return 0;
}