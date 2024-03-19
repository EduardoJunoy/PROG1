#include <stdio.h>
#include <math.h>

int esPrimo(int n)
{
    int i, resultado=1;
    
    for (i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            resultado=0;
            break;
        }
    }
    
    return resultado;
}

int main ()
{
    int i, num;
    
    do
    {
        printf("Intruduce un número entero positivo: ");
        scanf ("%d", &num);
    }while(num<=0);

    for (i=2; i<=num; i++)
    {
        if (esPrimo(i))
            printf("El número %d es primo\n", i);
        else
            printf("El número %d no es primo\n", i);
    }
    
    return 0;
}