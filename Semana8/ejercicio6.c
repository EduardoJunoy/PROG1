#include <stdio.h>
#include <math.h>

int esPrimo(int num){
    int i;

    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int primoMayor(int num){
    int i;

    for (i=0; esPrimo(num-i)==0; i++)
    {
        if (esPrimo(num-i)==1)
        {
            break;
        }
    }
    return num-i;
}

int main(){
    int num;

    do
    {
        printf("Introduce un numero superior a 1: \n");
        scanf("%d", &num);
        
    }while(num<=1);

    printf("El mayor primo comprendido entre 2 y %d es %d", num, primoMayor(num));

    return 0;
}