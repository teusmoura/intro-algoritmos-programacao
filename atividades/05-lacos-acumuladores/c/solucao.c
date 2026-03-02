/*
 * Lê n numeros reais e calcula a soma e a media.
 * Imprime "Soma: X.XX" e "Media: X.XX".
 */

#include <stdio.h>

int main(void) {
    int n, i;
    double valor, soma = 0.0, media;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &valor);
        soma += valor;
    }

    media = soma / n;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}
