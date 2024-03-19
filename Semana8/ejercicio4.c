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

int main() {
    int i, num;

    printf("Introduce un número natural: ");
    scanf("%d", &num);

    for (;num<=0;)
    {
        printf("Los naturales son enteros positivos. Introduce uno correcto:");
        scanf("%d", &num);
    }
    
    for (i=2 ; i<=num; i++)
    {
        if (esPrimo(i))
            printf("%d es primo.\n", i);
        else
            printf("%d no es primo.\n", i);
    }

    return 0;
}