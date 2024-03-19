#include <stdio.h>

#define X 32

int main(){
    int i=0, j;
    char cadena[X], minus, mayus;

    printf("Introduce una cadena de caracteres en minusculas: ");
    scanf("%s", cadena);
    
    do
    {
        printf("Introduce un caracter en minusculas: ");
        scanf("\n%c", &minus);
        if (minus<'a' || minus>'z')
        {
            printf("Error, los caracteres tienen que estar comprendidos entre a y z. \n");
        }
        
    } while (minus<'a' || minus>'z');

    do
    {
        printf("Introduce un caracter en mayusculas: ");
        scanf("\n%c", &mayus);
        if (mayus<'A' || mayus>'Z')
        {
            printf("Error, los caracteres tienen que estar comprendidos entre A y Z. \n");
        }
        
    } while (mayus<'A' || mayus>'Z');
    
    while (cadena[i]!=0)
    {
        if (cadena[i] == minus)
            cadena[i] = mayus;
        i++;
    }

    printf("%s\n", cadena);
    j=i-1;

    while (j>=0)
    {
        {
            printf("%c", cadena[j]);
        }
        j--;
    }

    return 0;
}