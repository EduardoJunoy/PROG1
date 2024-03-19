#include <stdio.h>

int main(){
    double peso;
    const double pesoluna = 0.1655;
    const double pesomarte = 0.3895;
    const double pesojupiter = 2.640;
    const double pesomiller = 1.3;
    const double pesopandora = 0.8;
    const double pesovulcano = 1.4;

    printf("Introduce tu peso:");
    scanf("%lf", &peso);
    printf("Tu peso en la Tierra es %.2lf kg.\nTu peso en la luna es %.2lf kg.\nTu peso en Marte es %.2lf kg.\nTu peso en Jupiter es %.2lf kg.\nTu peso en el planeta Miller es %.2lf kg.\nTu peso en Pandora es %.2lf kg.\nTu peso en Vulcano es %.2lf kg.\n", peso, peso * pesoluna, peso * pesomarte, peso * pesojupiter, peso * pesomiller, peso * pesopandora, peso * pesovulcano);

return 0;
}