#include <stdio.h>
#include <math.h>

int esPrimo(int num){
    int i, resultado=1;

    for (i=2; i<=sqrt(num); i++)
    {
        if (num%i == 0) 
        {
            resultado=0;
            break;
        }
    }
    return resultado;
}

int main(){
    int num;

    printf("Introduce un número natural: ");
    scanf("%d", &num);

    for (;num<=0;)
    {
        printf("Los naturales son enteros positivos. Introduce uno correcto:");
        scanf("%d", &num);
    }

    if (!esPrimo(num))
        printf("%d no es primo.\n", num);
        
    else if(esPrimo(num+2) && esPrimo(num-2))
        printf("El numero %d es primo y los números %d y %d son primos gemelos.", num, num-2, num+2);

    else if(esPrimo(num+2))
        printf("El numero %d es primo y el %d es primo gemelo.\n", num, num+2);

    else if(esPrimo(num-2))
        printf("El numero %d es primo y el %d es primo gemelo.\n", num, num-2);

    else
        printf("%d es primo pero no tiene un primo gemelo.\n", num);

    return 0;
}