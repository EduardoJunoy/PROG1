#include <stdio.h>

int main(){
    char p1[128], p2[128];
    int i, j, k, l;

    printf("Introduce una palabra:\n");
    scanf("%s", p1);
    printf("Introduce otra palabra:\n");
    scanf("%s", p2);

    for (i = 0; p1[i]!=0; i++)
    {
        for (j = 0, k=0; p2[j]!=0; j++)
        {
            if (p1[i]==p2[j])
            {
                k++;
            }
        }        
        printf("El caracter %c aparece %d veces\n", p1[i], k);
    }
    
    return 0;
}
/* #include <stdio.h>
#include <string.h>

#define TAM 128
#define NUM 26

int main() 
{
    char cadena1[TAM], cadena2[TAM];
    int i, j, tabla[NUM];
    
    printf("Introduce una palabra: ");
    scanf("%s", cadena1);
    
    printf("Introduce otra palabra: ");
    scanf("%s", cadena2);
    
    // Inicializa la tabla que almacena el nÃºmero total de encontrados para cada letra
    for(i=0; i<NUM; i++)
        tabla[i]=0;
    
    /* Recorre la primera cadena 
    for (i=0; i<strlen(cadena1); i++)
    {
        /* Si esa letra no se ha procesado previamente 
        if (tabla[cadena1[i]-'a']==0)
        {
            /* Recorre la segunda cadena y cuenta las coincidencias 
            for(j=0; j<strlen(cadena2); j++)
                if ( cadena1[i]==cadena2[j])
                    tabla[cadena1[i]-'a']++;
            
            printf("El carÃ¡cter %c aparece %d veces en la palabra %s\n", cadena1[i], tabla[cadena1[i]-'a'], cadena2);
        }
        else
            printf("El carÃ¡cter %c ya ha aparecido. Mira mÃ¡s arriba\n", cadena1[i]);
        
    }
    
    return 0;
} */