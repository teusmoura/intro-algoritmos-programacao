/*
 * Calcula a soma 1 + 2 + ... + N.
 * Entrada: N (inteiro). Saida: soma total.
 */

#include <stdio.h>

int main(void) {
    int n, i, soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
