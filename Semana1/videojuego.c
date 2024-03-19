#include <stdio.h>

int main(){
    double precio1;
    double tiempo1;
    double precio2;
    double tiempo2;
    double precio3;
    double tiempo3;
    double precio4;
    double tiempo4;
    double precio5;
    double tiempo5;
    double total;

    printf("Piensa en los ultimos cinco juegos que has jugado.\n ¿Cuantas horas le has echado al primero de ellos?");
    scanf("%lf", &tiempo1);
    printf("¿Y cuanto te costo?");
    scanf("%lf", &precio1);
    printf("¿Cuantas horas le has echado al segundo?");
    scanf("%lf", &tiempo2);
    printf("¿Y cuanto te costo?");
    scanf("%lf", &precio2);
    printf("¿Cuantas horas le has echado al tercero?");
    scanf("%lf", &tiempo3);
    printf("¿Y cuanto te costó?");
    scanf("%lf", &precio3);
    printf("¿Cuantas horas le has echado al cuarto?");
    scanf("%lf", &tiempo4);
    printf("¿Y cuanto te costo?");
    scanf("%lf", &precio4);
    printf("¿Cuantas horas le has echado al quinto?");
    scanf("%lf", &tiempo5);
    printf("¿Y cuanto te costo?");
    scanf("%lf", &precio5);

    total = (precio1/tiempo1 + precio2/tiempo2 + precio3/tiempo3 + precio4/tiempo4 + precio5/tiempo5) / 5 ;

    printf("¡Los ultimos 5 juegos te han salido a %lf euros la hora", total);
    return 0;
}