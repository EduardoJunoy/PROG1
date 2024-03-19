#include <stdio.h>

int main() {
    char x;

    printf("Introduce un caracter:");
    scanf("%c", &x);

    if (x =='a' || x =='e' || x =='i' || x =='o' || x =='u' || x == 'A' || x =='E' || x =='I' || x =='O' || x =='U')
            printf("El caracter '%c' es una vocal", x);
    
    else if ((x >= 'B' && x <= 'Z') || (x >= 'b' && x <= 'z'))
            printf("El caracter '%c' es una consonante", x);
    
    else
            printf("El caracter '%c' no es una letra", x);
    
    return 0;
}