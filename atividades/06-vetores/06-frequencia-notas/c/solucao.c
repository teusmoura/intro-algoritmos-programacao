/*
 * Conta a frequencia de cada nota (0-10) e imprime histograma.
 * Entrada: N, N inteiros. Saida: "Nota i: X" para i=0..10
 */

#include <stdio.h>

int main(void) {
    int n, i, nota;
    int freq[11] = {0}; /* frequencia de cada nota 0-10 */

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nota);
        freq[nota]++;
    }

    for (i = 0; i <= 10; i++) {
        printf("Nota %d: %d\n", i, freq[i]);
    }

    return 0;
}
