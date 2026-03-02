/*
 * Encontra maior e menor de N inteiros com suas posicoes.
 * Entrada: N, N inteiros. Saida: maior e menor com posicao (base 0).
 */

#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n, i;
    int vetor[MAX_N];
    int pos_maior, pos_menor;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    pos_maior = pos_menor = 0;
    for (i = 1; i < n; i++) {
        if (vetor[i] > vetor[pos_maior]) pos_maior = i;
        if (vetor[i] < vetor[pos_menor]) pos_menor = i;
    }

    printf("Maior: %d na posicao %d\n", vetor[pos_maior], pos_maior);
    printf("Menor: %d na posicao %d\n", vetor[pos_menor], pos_menor);

    return 0;
}
