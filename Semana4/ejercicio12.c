#include <stdio.h>

typedef struct {
    double exp;
    int nivel;
    char usuario[64], campeon[32];
    int KDA [3];
} lol;

int main () {
    lol car = {car.exp, car.nivel, car.KDA[0], car.KDA[1], car.KDA[2], car.usuario, car.campeon};
    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &car.usuario);
    printf("Introduzca el nivel de su cuenta: \n");
    scanf("\n%d", &car.nivel);
    printf("Introduzca la experiencia que obtuvo en la ultima partida: \n");
    scanf("\n%lf", &car.exp);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &car.campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &car.KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &car.KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &car.KDA[2]);

    double KDA = (car.KDA[0]+car.KDA[2])/car.KDA[1];

    printf("\n%s, de nivel %d has jugado con %s, tu K/D/A ha sido %.2lf y has conseguido %.2lf de experiencia.\n", car.usuario, car.nivel, car.campeon, KDA, car.exp);

    return 0;
}