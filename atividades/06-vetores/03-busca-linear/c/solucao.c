/*
 * Busca linear: encontra indice (base 0) do alvo em um vetor.
 * Entrada: N, N inteiros, alvo. Saida: "Indice: X" ou "Nao encontrado"
 */

#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n, i, alvo, indice = -1;
    int vetor[MAX_N];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &alvo);

    for (i = 0; i < n; i++) {
        if (vetor[i] == alvo) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        printf("Indice: %d\n", indice);
    } else {
        printf("Nao encontrado\n");
    }

    return 0;
}
