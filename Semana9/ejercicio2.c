#include <stdio.h>

void niParesniNones(int x, int *y){
    if ((x%2==0 && (*y)%2==0) || (x%2!=0 &&(*y)%2!=0))
    {
        (*y)++;
    }
}

int main(){
    int x, y;

    printf("Introduzca el primer valor:\n");
    scanf("%d", &x);
    printf("Introduzca el segundo valor:\n");
    scanf("%d", &y);

    niParesniNones(x,&y);
    printf("%d %d", x, y);

    return 0;
}