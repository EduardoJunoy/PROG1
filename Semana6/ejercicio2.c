#include <stdio.h>  
int main() {
    int decimal[8], binario[8], i=0;   

    printf("Introduce un numero en base 10: ");     
    scanf("%d", &decimal[0]);      
    
    while (i<8)     
    {         
        binario[i]=decimal[i]%2;         
        decimal[i+1]=decimal[i]/2;         
        i++;     
    }     
    
    i=7;     
    
    while (i>=0)     
    {         
        printf("%d", binario[i]);         
        i--;     
    }      

    return 0; 
}