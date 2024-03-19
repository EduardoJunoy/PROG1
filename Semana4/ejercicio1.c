#include <stdio.h>
#define PESO_REL_LUNAR 0.1655
#define PESO_REL_MARTE 0.3895 
#define PESO_REL_JUPITER 2.640 
#define PESO_REL_MILLER 1.3 
#define PESO_REL_PANDORA 0.8 
#define PESO_REL_VULCANO 1.4

int main(){
    double peso;

    printf("Introduce tu peso:");
    scanf("%lf", &peso);
    printf("Tu peso en la Tierra es %.2lf kg.\nTu peso en la luna es %.2lf kg.\nTu peso en Marte es %.2lf kg.\nTu peso en Jupiter es %.2lf kg.\nTu peso en el planeta Miller es %.2lf kg.\nTu peso en Pandora es %.2lf kg.\nTu peso en Vulcano es %.2lf kg.\n", peso, peso * PESO_REL_LUNAR, peso * PESO_REL_MARTE, peso * PESO_REL_JUPITER, peso * PESO_REL_MILLER, peso * PESO_REL_PANDORA, peso * PESO_REL_VULCANO);

return 0;
}