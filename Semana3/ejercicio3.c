#include <stdio.h>
int main(){
    int edad;

    printf("Por favor, introduzca su edad:");
    scanf("%d", &edad);
    if (edad >= 18 && edad%3 != 0) {
            printf("Eres mayor de edad o no multiplo de 3:");
    } else if ( edad < 18 || edad%3 == 0){
            printf("Eres menor de edad o tu edad es múltiplo de tres");
    }
    return 0;
}