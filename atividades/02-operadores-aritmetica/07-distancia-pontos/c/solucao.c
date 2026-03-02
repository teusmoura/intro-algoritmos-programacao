/*
 * Calcula a distancia euclidiana entre dois pontos.
 * Entrada: x1, y1, x2, y2. Saida: "Distancia: X.XXXX"
 * Compilar com: gcc c/solucao.c -o solucao -lm
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, y1, x2, y2, distancia;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distancia: %.4f\n", distancia);

    return 0;
}
