/*
 * Imprime todos os primos no intervalo [2, N].
 * Entrada: N (inteiro >= 2). Saida: primos, um por linha.
 * Compilar com: gcc c/solucao.c -o solucao -lm
 */

#include <stdio.h>
#include <math.h>

int eh_primo(int k) {
    int d;
    if (k < 2) return 0;
    for (d = 2; d <= (int)sqrt((double)k); d++) {
        if (k % d == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n, k;

    scanf("%d", &n);

    for (k = 2; k <= n; k++) {
        if (eh_primo(k)) {
            printf("%d\n", k);
        }
    }

    return 0;
}
