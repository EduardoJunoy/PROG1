#include <stdio.h>  
void operacion(){     
    double base, altura, area;      
    
    printf("Introduzca la base del triangulo: \n");     
    scanf("%lf", &base);     
    printf("Introduzca la altura del triangulo: \n");     
    scanf("%lf", &altura);     

    area = (base * altura) /2;     
    printf("El area del triangulo es %.2lf.\n", area); 
    }  
    
    int main(){     
        operacion();          
        return 0; 
        }