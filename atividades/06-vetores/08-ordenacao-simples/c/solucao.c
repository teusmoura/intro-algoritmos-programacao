/*
 * Ordena N inteiros usando Bubble Sort.
 * Entrada: N, N inteiros. Saida: ordenados, um por linha.
 */

#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n, i, j, temp;
    int vetor[MAX_N];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    /* Bubble Sort */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp        = vetor[j];
                vetor[j]    = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
