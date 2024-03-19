#include <stdio.h>

int main(){
    int uno, *p;
    int dos, *q;
    double media, *r;
    
    p = &uno;
    q = &dos;
    r = &media;

    printf("Introduzca el primer numero:\n");
    scanf("%d", p);
    printf("Introduzca el segundo numero:\n");
    scanf("%d", q);

    *r = ((double)*p+(double)*q)/2;
    printf("La media de los dos numeros es: %.2lf \n", *r);

    return 0;
}