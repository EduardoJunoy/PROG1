#include <stdio.h>

int main() {
    char c1, c2;

    printf("Por favor, introduce un caracter: ");
    scanf("%c", &c1);
    printf("Por favor, introduce otro caracter: ");
    scanf("\n%c", &c2);    
    printf("Si sumamos el codigo ASCII del caracter %c que es %d con el codigo ASCII del caracter %c que es %d obtenemos el numero %d", c1, c1, c2, c2, c1+c2);
    return 0;

}