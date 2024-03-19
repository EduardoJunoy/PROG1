#include <stdio.h>

typedef struct {
    char campeon[32];
    int KDA [3];
} juego;

typedef struct {
    juego lol;
    double exp;
    int nivel;
    char usuario[64];
} invocador;

int main () {
    invocador car;

    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &car.usuario);
    printf("Introduzca el nivel de su cuenta: \n");
    scanf("\n%d", &car.nivel);
    printf("Introduzca la experiencia que obtuvo en la ultima partida: \n");
    scanf("\n%lf", &car.exp);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &car.lol.campeon);
    
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &car.lol.KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &car.lol.KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &car.lol.KDA[2]);

    double KDA = (car.lol.KDA[0]+car.lol.KDA[2])/car.lol.KDA[1];

    printf("\n%s, de nivel %d has jugado con %s, tu K/D/A ha sido %.2lf y has conseguido %.2lf de experiencia.\n", car.usuario, car.nivel, car.lol.campeon, KDA, car.exp);

    return 0;
}