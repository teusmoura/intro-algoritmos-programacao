/*
 * Imprime contagem regressiva de N ate 0.
 * Entrada: N (inteiro >= 0). Saida: N, N-1, ..., 0 cada um em linha.
 */

#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);

    for (i = n; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
