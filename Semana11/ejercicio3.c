#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anyo;
} Fecha;

int main(){
    Fecha *fechas;
    int dim, i, mas_antigua;

    printf("Introduce la dimension de la tabla:\n");
    scanf("%d", &dim);

    fechas = (Fecha *) malloc (dim * sizeof (Fecha));

    for (i=0; i < dim; i++)
    {
        printf("Introduce el dia:\n");
        scanf("%d", &fechas[i].dia);
        printf("Introduce el mes:\n");
        scanf("%d", &fechas[i].mes);
        printf("Introduce el anyo:\n");
        scanf("%d", &fechas[i].anyo);
    }

        /* Cálculo de la fecha más antigua */
    for (i=1, mas_antigua=0; i<dim; i++)
    {
        if (fechas[i].anyo < fechas[mas_antigua].anyo)
            mas_antigua = i;
        else if (fechas[i].anyo == fechas[mas_antigua].anyo)
        {
            if (fechas[i].mes < fechas[mas_antigua].mes)
                mas_antigua = i;
            else if ( (fechas[i].mes == fechas[mas_antigua].mes) && (fechas[i].dia < fechas[mas_antigua].dia) )
                mas_antigua = i;
        }
    }

    printf ("La fecha mas antigua es %d/%d/%d\n", fechas[mas_antigua].dia, fechas[mas_antigua].mes, fechas[mas_antigua].anyo);

    free(fechas);

    return 0;
}
