/*
 * Remove duplicatas de N inteiros mantendo a ordem de primeira ocorrencia.
 * Entrada: N, N inteiros. Saida: unicos, um por linha.
 */

#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n, i, j;
    int vetor[MAX_N], unicos[MAX_N];
    int qtd_unicos = 0;
    int encontrado;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
        encontrado = 0;
        for (j = 0; j < qtd_unicos; j++) {
            if (unicos[j] == vetor[i]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            unicos[qtd_unicos++] = vetor[i];
        }
    }

    for (i = 0; i < qtd_unicos; i++) {
        printf("%d\n", unicos[i]);
    }

    return 0;
}
