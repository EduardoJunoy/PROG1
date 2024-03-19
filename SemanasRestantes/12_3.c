#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
    int dia;
    int mes;
    int agno;
} Fecha;

int main ()
{
    int i, dim, mas_antigua;
    Fecha * fechas;

    printf ("Introduzca dimension de la tabla: ");
    scanf ("%d", &dim);

    fechas = (Fecha *) malloc (dim * sizeof (Fecha));
    if (fechas == NULL)
    {
        printf ("No se pudo reservar memoria\n");
        return 1;
    }

    for (i=0; i<dim; i++)
    {
        printf ("Introduzca dia de la fecha %d: ", i);
        scanf ("%d", &fechas[i].dia);
        printf ("Introduzca mes de la fecha %d: ", i);
        scanf ("%d", &fechas[i].mes);
        printf ("Introduzca agno de la fecha %d: ", i);
        scanf ("%d", &fechas[i].agno);
    }
    
    /* Cálculo de la fecha más antigua */
    for (i=1, mas_antigua=0; i<dim; i++)
    {
        if (fechas[i].agno < fechas[mas_antigua].agno)
            mas_antigua = i;
        else if (fechas[i].agno == fechas[mas_antigua].agno)
        {
            if (fechas[i].mes < fechas[mas_antigua].mes)
                mas_antigua = i;
            else if ( (fechas[i].mes == fechas[mas_antigua].mes) && (fechas[i].dia < fechas[mas_antigua].dia) )
                mas_antigua = i;
        }
    }

    printf ("La fecha mas antigua es %d/%d/%d\n", fechas[mas_antigua].dia, fechas[mas_antigua].mes, fechas[mas_antigua].agno);

    free (fechas);

    return 0;
}
