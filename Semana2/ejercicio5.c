#include <stdio.h>
int main(){
    char c1;
   
    printf("Introduce una letra mayuscula:");
    scanf("%c", &c1);

    printf("La letra %c en minuscula es %c", c1, c1+32);
    return 0;
}