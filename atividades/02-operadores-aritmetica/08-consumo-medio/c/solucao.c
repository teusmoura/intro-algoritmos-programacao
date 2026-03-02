/*
 * Calcula consumo medio de combustivel em km/l.
 * Entrada: distancia (km), combustivel (litros). Saida: "Consumo: X.XX km/l"
 */

#include <stdio.h>

int main(void) {
    double distancia, combustivel, consumo;

    scanf("%lf", &distancia);
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo: %.2f km/l\n", consumo);

    return 0;
}
