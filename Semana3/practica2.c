#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Introduce el primer numero:");
    scanf("%d", &num1);
    printf("Introduce segundo numero:");
    scanf("%d", &num2);
    printf("Introduce el tercer numero:");
    scanf("%d", &num3);

    if (num1 == num2 && num1 == num3)
        printf("Los tres numeros son iguales");
    else if (num1 == num2 || num1 == num3 || num2 == num3)
        printf("Hay dos numeros iguales y uno diferente");
    else
        printf("Los tres numeros son diferentes");

return 0;
}