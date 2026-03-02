/*
 * Le inteiros ate 0 e calcula soma e quantidade.
 * Saida: "Soma: X", "Quantidade: Y"
 */

#include <stdio.h>

int main(void) {
    int v, soma = 0, quantidade = 0;

    while (1) {
        scanf("%d", &v);
        if (v == 0) break;
        soma       += v;
        quantidade++;
    }

    printf("Soma: %d\n",       soma);
    printf("Quantidade: %d\n", quantidade);

    return 0;
}
