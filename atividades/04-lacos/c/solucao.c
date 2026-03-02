/*
 * Lê um inteiro n e imprime todos os numeros de 1 ate n, um por linha.
 */

#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
