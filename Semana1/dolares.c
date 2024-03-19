#include <stdio.h>

int main() {
    double euros;
    double dolares;
   
    dolares = 100;   
    euros = dolares * 0.859;

    printf("%lf dólares son %lf euros.\n", dolares, euros);
   
    return 0;
}