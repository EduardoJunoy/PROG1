#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int anyo;
    int mes;
    int dia;
    int hora;
    int minuto;
    int segundo;
    char* valor;
}fechaHora;

int fechaAnteriorSegundo(fechaHora *f1, fechaHora *f0);
int fechaAnterioresNSegundos(fechaHora *f1, fechaHora *f0, int n);
int fechaValor(fechaHora *f);

int main(){
    int n;
    fechaHora *f1;
    fechaHora *f0;

    f1 = (fechaHora*) malloc(sizeof(fechaHora));
    f0 = (fechaHora*) malloc(sizeof(fechaHora));

    printf("\nAnyo:\n");
    scanf("%d", &f1->anyo);
    printf("\nMes:\n");
    scanf("%d", &f1->mes);
    printf("\nDia:\n");
    scanf("%d", &f1->dia);
    printf("\nHora:\n");
    scanf("%d", &f1->hora);
    printf("\nMinuto:\n");
    scanf("%d", &f1->minuto);
    printf("\nSegundo:\n");
    scanf("%d", &f1->segundo);
    
    if (fechaValor(f1)==1)
    {
        printf("Error al establecer el valor de la fecha en formato texto.\n");
    }
    
    printf("\nLa fecha introducida es: %s\n", f1->valor);

    printf("\nNumero de segundos para retroceder:\n");
    scanf("%d", &n);
    
    if (fechaAnterioresNSegundos(f1, f0, n) == 1)
    {
        printf("Error al establecer el valor de la fecha en formato texto.\n");
        return 0;
    }

    printf("\nLa fecha %d segundos antes es:\n", n);

    printf("\nAnyo: %d\n", f1->anyo);
    printf("\nMes: %d\n", f1->mes);
    printf("\nDia: %d\n", f1->dia);
    printf("\nHora: %d\n", f1->hora);
    printf("\nMinuto: %d\n", f1->minuto);
    printf("\nSegundo: %d\n", f1->segundo);

    return 0;
}

int fechaAnteriorSegundo(fechaHora *f1, fechaHora *f0){

    if (!f1 || !f0 || f1->mes >= 13 || f1->dia >= 32 || f1->hora >= 24 || f1->minuto >= 60 || f1->segundo >= 60 || f1->mes <= 0 || f1->dia <= 0 || f1->hora < 0 || f1->minuto < 0 || f1->segundo < 0)
    {
        return 1;
    }
    
    f0->anyo=f1->anyo;
    f0->mes=f1->mes;
    f0->dia=f1->dia;
    f0->hora=f1->hora;
    f0->minuto=f1->minuto;
    f0->segundo=f1->segundo-1;

    if (f0->segundo < 0)
    {
        f0->minuto-=1;
        if (f0->minuto < 0)
        {
            f0->hora-=1;
            if (f0->hora <= 0)
            {
                f0->dia-=1;
                if (f0->dia <= 0)
                {
                    f0->mes-=1;
                    if (f0->mes <= 0)
                    {
                        f0->anyo-=1;
                    }
                }
            }
        }
    }
    return 0;
}

int fechaAnterioresNSegundos(fechaHora *f1, fechaHora *f0, int n){
    if (!f1 || !f0 || !n)
    {
        printf("Error al establecer el valor de la fecha en formato texto.\n");
        return 1;
    }
    
    int i;

    for(i=0; i<n; n++){
        fechaAnteriorSegundo(f1, f0);
    }
    return 0;
}

int fechaValor(fechaHora *f){
    f->valor[0] = '0' + f->hora/10;
    f->valor[1] = '0' + f->hora%10;
    f->valor[2] = ':';

    f->valor[3] = '0' + f->minuto/10;
    f->valor[4] = '0' + f->minuto%10;
    f->valor[5] = ':';

    f->valor[6] = '0' + f->segundo/10;
    f->valor[7] = '0' + f->segundo%10;
    f->valor[8] = ' ';

    f->valor[9] = '0' + f->dia/10;
    f->valor[10] = '0' + f->dia%10;
    f->valor[11] = '/';

    f->valor[12] = '0' + f->mes/10;
    f->valor[13] = '0' + f->mes%10;
    f->valor[14] = '/';
    
    f->valor[15] = '0' + f->anyo/10;
    f->valor[16] = '0' + f->anyo%10;
    f->valor[17] = '\0';

    return 0;
}