#include <stdio.h>
int main(){
    int edad;

    printf("Por favor, introduzca su edad:");
    scanf("%d", &edad);
    printf("Eres mayor de edad o no multiplo de 3: %d", edad >= 18 && edad%3 != 0);
    return 0;
}