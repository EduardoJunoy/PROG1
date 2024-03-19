#include <stdio.h>
#define TAM 1000
int main (){
    int i, j, longitud, elemento[TAM];

    do{
        printf("Iltroduzca la longitud del conjunto:");
        scanf("%d", &longitud);
        if (longitud<2 || longitud>1000)
            printf("Error. Debe introducir un numero del 2 al 1000\n");
    } while (longitud<2 || longitud>1000);


    for (i = 0; i < longitud; i++){
        printf("Escribe el elemento %d del conjunto:", i+1);
        scanf("%d", &elemento[i]);
    }
    for (i = 0; i < longitud; i++){
        for ( j = 0; j < 1000; j++){
            if (elemento[i]%j==0){
                printf("Los numeros del conjunto tienen como divisor comun al %d", j);
            }
            else
                printf("Los numeros del conjunto son todos primos relativos");
        }
        
    }
    return 0;
}