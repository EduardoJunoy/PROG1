#include <stdio.h>

int main(){
    int i, j;

    
    for (i=1; i<10; i++){
        printf ("\n\nEsto es la tabla del %d:\n", i);
        for (j=1;j<=10;j++){
            printf ("%d ", i*(j));
        }
    }
    return 0;
}