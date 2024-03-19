#include <stdio.h>

typedef struct 
{
    int dia;
    int mes;
    int anio;
} Fecha;

void incrementaDia(Fecha *x){
    x->dia++;

    if ((x->dia)>30)
    {
        (x->dia)-= 30;
        (x->mes)+= 1;
    }
    else if (x->mes>12)
    {
        (x->mes)-=12;
        (x->anio)+=1;
    }
}

int main(){
    Fecha x;

    printf("Introduzca el dia:\n");
    scanf("%d", &x.dia);
    printf("Introduzca el mes:\n");
    scanf("%d", &x.mes);
    printf("Introduzca el anio:\n");
    scanf("%d", &x.anio);

    incrementaDia(&x);

    printf("La fecha incrementada es:\n%d/%d/%d", x.dia, x.mes, x.anio);
    return 0;
}