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

int primoMayor(int num)
{
    int i;
    
    for(i=num; i>=2; i--)
        if (esPrimo(i)) // Recuerda que esta instrucción equivale a if (esPrimo(i) != 0)
            break;
    
    return i;
}

/* Esta se podria haber escrito de la forma (donde no comprobamos directamente el retorno de la funci�n sino que lo guardamos en una variable):

int primoMayor(int num)
{
    int i, ret;

    for(i=num; i>=2; i--)
    {
        ret=esPrimo(i);
        if (ret)        // Recuerda que este código es equivalente a if(ret!=0)
            break;
    }
          
    return i;
}
*/

int main ()
{
    int num;
    
    do
    {
        printf("Intruduce un número superior a 1: ");
        scanf ("%d", &num);
    }while(num<2);
    
    printf("El mayor primo comprendido entre 2 y %d es %d", num, primoMayor(num));
    /* Tambi�n podr�amos haber hecho esto en dos pasos, guardando el retorno de la funci�n en una variable: 
     
     mayor = primoMayor(num);
     printf("El mayor primo comprendido entre 2 y %d es %d", num, mayor);
     
     Para esto tendr�amos que haber declarado la variable mayor junto con la variable num  
     */

    return 0;
}