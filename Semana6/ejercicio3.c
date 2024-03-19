#include <stdio.h>
#define TAM 16
int main() {
    int decimal[TAM], binario[TAM], i;

    printf("Introduce un numero en base 10: ");
    scanf("%d", &decimal[0]);

    for(i=0;i<TAM;i++)
    {
        binario[i]=decimal[i]%2;
        decimal[i+1]=decimal[i]/2;
    }

    for (i=(TAM-1);i>=0;i--)
    {
        printf("%d", binario[i]);
    }
    
    return 0;
}