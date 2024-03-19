#include <stdio.h>
#include <string.h>

int main(){
    char palabra [100];
    int num;

    printf("Escribe una palabra: ");
    scanf("%s", palabra);
    printf("La longitud de dicha palabra es: %d", strlen(palabra));

    printf("\nIndica un número menor a dicha longitud: ");
    scanf("%d", &num);

    palabra[num] = 0;

    printf("La palabra cortada en la letra %d es: %s", num, palabra);

    return 0;
}