#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Introduce el primer numero:");
    scanf("%d", &num1);
    printf("Introduce segundo numero:");
    scanf("%d", &num2);
    printf("Introduce el tercer numero:");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)
        printf("El numero %d es el menor", num1);
    else if (num2 < num1 && num2 < num3)
        printf("El numero %d es el menor", num2);
    else
        printf("El numero %d es el menor", num3);

return 0;
}