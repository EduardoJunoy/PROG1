#include <stdio.h>

typedef struct {
    int dia, mes, anyo;
} fecha;

typedef struct {
    char nombre[64];
    fecha f[2];
} citas;

int main(){
    citas c;
    
    printf("Introduzca su nombre: \n");
    scanf("%s", c.nombre);
    printf("Introduce un dia: \n");
    scanf("%d", &c.f[0].dia);
    printf("Introduce un mes: \n");
    scanf("%d", &c.f[0].mes);
    printf("Introduce un anyo: \n");
    scanf("%d", &c.f[0].anyo);
    printf("Introduce otro dia: \n");
    scanf("%d", &c.f[1].dia);
    printf("Introduce otro mes: \n");
    scanf("%d", &c.f[1].mes);
    printf("Introduce otro anyo: \n");
    scanf("%d", &c.f[1].anyo);
    
    printf("Hola %s\nTienes una cita el %d/%d/%d y otra el %d/%d/%d\n", c.nombre, c.f[0].dia, c.f[0].mes, c.f[0].anyo, c.f[1].dia, c.f[1].mes, c.f[1].anyo);

    return 0;
}