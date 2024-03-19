#include <stdio.h>

int main(){
    int fila;
    int columna;
    int matriz [3][2] = {{'X', 'O'}, {'O','X'}, {'X','X'}};
    
    printf("Introduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d encontramos: %c", fila, columna, matriz[fila-1][columna-1]);
    
    printf("\nIntroduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d encontramos: %c", fila, columna, matriz[fila-1][columna-1]);

    printf("\nIntroduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d encontramos: %c", fila, columna, matriz[fila-1][columna-1]);

    return 0;
}