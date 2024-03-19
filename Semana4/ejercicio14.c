#include <stdio.h>

#define C 128

typedef struct {
    int KDA[3];
    char campeon[C], usuario[C];
} invocador;

int main () {
    invocador datos[5];

    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &datos[0].usuario);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &datos[0].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &datos[0].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &datos[0].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &datos[0].KDA[2]);

    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &datos[1].usuario);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &datos[1].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &datos[1].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &datos[1].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &datos[1].KDA[2]);
    printf("Introduzca su nombre de usuario en el League of Legends: \n");

    scanf("\n%s", &datos[2].usuario);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &datos[2].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &datos[2].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &datos[2].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &datos[2].KDA[2]);

    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &datos[3].usuario);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &datos[3].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &datos[3].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &datos[3].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &datos[3].KDA[2]);

    printf("Introduzca su nombre de usuario en el League of Legends: \n");
    scanf("\n%s", &datos[4].usuario);
    printf("Introduzca el nombre del campeon: \n");
    scanf("\n%s", &datos[4].campeon);
    printf("Introduzca el numero de asesinatos que hizo: \n");
    scanf("\n%d", &datos[4].KDA[0]);
    printf("Introduzca el numero de muertes que tuvo: \n");
    scanf("\n%d", &datos[4].KDA[1]);
    printf("Introduzca el numero de asistencias que hizo: \n");
    scanf("\n%d", &datos[4].KDA[2]);

    int asesinatos = datos[0].KDA[0] + datos[1].KDA[0] + datos[2].KDA[0] + datos[3].KDA[0] + datos[4].KDA[0];
    int muertes = datos[0].KDA[1] + datos[1].KDA[1] + datos[2].KDA[1] + datos[3].KDA[1] + datos[4].KDA[1];
    int asistencias = datos[0].KDA[2] + datos[1].KDA[2] + datos[2].KDA[2] + datos[3].KDA[2] + datos[4].KDA[2];
    double KDA = (asesinatos+asistencias)/muertes;

    printf("\nUsuarios %s, %s, %s, %s y %s, el KDA de vuestra partida ha sido %d/%d/%d y su ratio %.2lf", datos[0].usuario, datos[1].usuario, datos[2].usuario, datos[3].usuario, datos[4].usuario, asesinatos, muertes, asistencias, KDA);

    return 0;
}