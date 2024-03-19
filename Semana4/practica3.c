#include <stdio.h>

typedef struct {
    char letras[5];
    int suma;
} palabra;

int main(){
    
    palabra p;

    printf("Introduce una palabra de 4 caracteres: \n");
    scanf("%s", p.letras);

    p.suma = p.letras[0] + p.letras[1] + p.letras[2] + p.letras[3];

    if (p.letras[4] == 0 )
        printf("La palabra %s está formada por los caracteres %c, %c, %c, %c y la suma de sus códigos ASCII es %d.", p.letras, p.letras[0], p.letras[1], p.letras[2], p.letras[3], p.suma);

    else 
        printf("La palabra %s no tiene 4 caracteres", p.letras);

    return 0;
}  