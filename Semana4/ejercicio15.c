#include <stdio.h>

#define C 128

typedef struct {
    int KDA[3];
    char campeon[C];
} partidas;

typedef struct {
    partidas p[3];
    char usuario[C];
} jugadores;

int main () {
    jugadores j[2];
    //JUGADOR 1
    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &j[0].usuario);
    //PARTIDA 1
    printf("¿Con qué campeón has jugado tu última partida? \n");
    scanf("\n%s", &j[0].p[0].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &j[0].p[0].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &j[0].p[0].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &j[0].p[0].KDA[2]);
    //PARTIDA 2
    printf("¿Con qué campeón jugaste tu penúltima partida? \n");
    scanf("\n%s", &j[0].p[1].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &j[0].p[1].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &j[0].p[1].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &j[0].p[1].KDA[2]);
    //PARTIDA 3
    printf("¿Con qué campeón jugaste tu antepenúltima partida? \n");
    scanf("\n%s", &j[0].p[2].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &j[0].p[2].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &j[0].p[2].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &j[0].p[2].KDA[2]); 

    int asesinatos1 = j[0].p[0].KDA[0] + j[0].p[1].KDA[0] + j[0].p[2].KDA[0];
    int muertes1 = j[0].p[0].KDA[1] + j[0].p[1].KDA[1] + j[0].p[1].KDA[1];
    int asistencias1 = j[0].p[0].KDA[2] + j[0].p[1].KDA[2] + j[0].p[2].KDA[2];
    double KDA1 = (asesinatos1+asistencias1)/muertes1;

    printf("%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2lf. \n", j[0].usuario, KDA1);

    //JUGADOR 2
    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &j[1].usuario);
    //PARTIDA 1
    printf("¿Con qué campeón has jugado tu última partida? \n");
    scanf("\n%s", &j[1].p[0].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &j[1].p[0].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &j[1].p[0].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &j[1].p[0].KDA[2]);
    //PARTIDA 2
    printf("¿Con qué campeón jugaste tu penúltima partida? \n");
    scanf("\n%s", &j[1].p[1].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &j[1].p[1].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &j[1].p[1].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &j[1].p[1].KDA[2]); 
    //PARTIDA 3
    printf("¿Con qué campeón jugaste tu antepenúltima partida? \n");
    scanf("\n%s", &j[1].p[2].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &j[1].p[2].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &j[1].p[2].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &j[1].p[2].KDA[2]);

    int asesinatos2 = j[1].p[0].KDA[0] + j[1].p[1].KDA[0] + j[1].p[2].KDA[0];
    int muertes2 = j[1].p[0].KDA[1] + j[1].p[1].KDA[1] + j[1].p[1].KDA[1];
    int asistencias2 = j[1].p[0].KDA[2] + j[1].p[1].KDA[2] + j[1].p[2].KDA[2];
    double KDA2 = (asesinatos2+asistencias2)/muertes2;

    printf("%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2lf. \n", j[1].usuario, KDA2);

    return 0;
}