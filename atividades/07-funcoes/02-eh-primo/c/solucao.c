/*
 * Lista primos no intervalo [2, N] usando funcao eh_primo.
 * Entrada: N. Saida: primos, um por linha, e "Total: X primos"
 * Compilar com: gcc c/solucao.c -o solucao -lm
 */

#include <stdio.h>
#include <math.h>

/* Retorna 1 se n e primo, 0 caso contrario */
int eh_primo(int n) {
    int d;
    if (n < 2) return 0;
    for (d = 2; d <= (int)sqrt((double)n); d++) {
        if (n % d == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n, k, total = 0;

    scanf("%d", &n);

    for (k = 2; k <= n; k++) {
        if (eh_primo(k)) {
            printf("%d\n", k);
            total++;
        }
    }

    printf("Total: %d primos\n", total);

    return 0;
}
