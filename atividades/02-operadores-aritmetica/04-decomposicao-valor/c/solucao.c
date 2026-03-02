/*
 * Decompoe um valor em notas e moedas (denominacao minima).
 * Entrada: valor inteiro (reais). Saida: contagem por denominacao (somente >0).
 */

#include <stdio.h>

int main(void) {
    int valor, qtd;
    int denominacoes[] = {100, 50, 20, 10, 5, 2, 1};
    int n = 7, i;

    scanf("%d", &valor);

    for (i = 0; i < n; i++) {
        qtd   = valor / denominacoes[i];
        valor = valor % denominacoes[i];
        if (qtd > 0) {
            printf("%d nota(s)/moeda(s) de %d\n", qtd, denominacoes[i]);
        }
    }

    return 0;
}
