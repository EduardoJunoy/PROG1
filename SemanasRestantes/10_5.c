#include <stdio.h>
 
#define TAM 3
 
int main ()
{
    int uno [TAM] = {1, 2, 3};
    double dos [TAM] = {1.2, 3.1, 2.5};
    int * p;
    double * q;
    int i;

    for(i=0, p = uno, q = dos; i<TAM; i++, p++, q++)
    {
        printf("Lista uno: %d\n", *p);
        printf("Lista dos: %lf\n", *q);
    }
    
    return 0;
}