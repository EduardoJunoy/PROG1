#include <stdio.h>

int main(){
    int tabla[10], i, j;

    for (i = 0; i<10; i++)
    {
        printf("Introduce el numero (%d):\n", i+1);
        scanf("%d", &tabla[i]);
    
        for (j = 1; j <= i && i>0; j++)
        {
            if (tabla[i]==tabla[i-j])
            {
                printf("Hasta aqui hemos llegado. Has repetido el numero %d\n", tabla[i]);
                i=10;
            }
            else if (i==9 && tabla[i]!=tabla[i-j])
            {
                printf("Has llegado a introducir los 10 numeros sin repetir ninguno.\n");
                break;
            }                
        }
    }
    return 0;
}
