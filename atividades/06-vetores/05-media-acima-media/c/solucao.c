/*
 * Calcula a media de N valores e conta quantos estao acima dela.
 * Entrada: N, N floats. Saida: "Media: X.XX" e "Acima da media: Y"
 */

#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n, i, acima = 0;
    double vetor[MAX_N], soma = 0.0, media;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;

    for (i = 0; i < n; i++) {
        if (vetor[i] > media) acima++;
    }

    printf("Media: %.2f\n",         media);
    printf("Acima da media: %d\n",  acima);

    return 0;
}
