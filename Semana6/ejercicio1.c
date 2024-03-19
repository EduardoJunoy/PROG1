#include <stdio.h>

int main(){
    int num, i;
    printf ("Introduzca un numero del 1 al 9: ");
    scanf("%d", &num);

    for (i=0;0<num && num<10 && i<=10;i++){
        printf ("%d ", num*(i));
    }
    return 0;
}