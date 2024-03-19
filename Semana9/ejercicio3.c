#include <stdio.h>

void estadistica (int x, int y, double * pMedia, double * pVar){
    *pVar = ((x-*pMedia)*(x-*pMedia) + (y-*pMedia)*(y-*pMedia))/2;
    *pMedia = ((double)x+(double)y)/2;
}

int main(){
    int x, y;
    double media, varianza;
    
    printf("Introduzca el primer valor:");
    scanf("%d", &x);
    printf("Introduzca el segundo valor");
    scanf("%d", &y);
    
    estadistica(x, y, &media, &varianza);

    printf("Media: %.2lf\nVarianza: %.2lf", media, varianza);

    return 0;
}