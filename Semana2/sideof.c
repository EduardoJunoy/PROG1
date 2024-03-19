#include <stdio.h>

int main(){
    printf("float = %d\n", sizeof(float));
    printf("unsigned int = %d\n", sizeof(short));
    printf("1.15 = %d\n", sizeof(1.15));
    printf("¡Hola, mundo! = %d\n", sizeof("¡Hola, mundo!"));

    return 0;
}