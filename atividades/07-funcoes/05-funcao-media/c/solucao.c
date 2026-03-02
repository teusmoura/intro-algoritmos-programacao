/*
 * Calcula a media de N valores usando uma funcao dedicada.
 * Entrada: N, N floats. Saida: "Media: X.XX"
 */

#include <stdio.h>

#define MAX_N 1000

double media(double *valores, int n) {
    double soma = 0.0;
    int i;
    for (i = 0; i < n; i++) soma += valores[i];
    return soma / n;
}

int main(void) {
    int n, i;
    double valores[MAX_N];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &valores[i]);
    }

    printf("Media: %.2f\n", media(valores, n));

    return 0;
}
