/*
 * Calcula MDC (algoritmo de Euclides) e MMC.
 * Entrada: a, b. Saida: "MDC: X" e "MMC: Y"
 */

#include <stdio.h>

/* Retorna o MDC de a e b pelo algoritmo de Euclides */
long long mdc(long long a, long long b) {
    long long temp;
    while (b != 0) {
        temp = b;
        b    = a % b;
        a    = temp;
    }
    return a;
}

int main(void) {
    long long a, b, d, m;

    scanf("%lld", &a);
    scanf("%lld", &b);

    d = mdc(a, b);
    m = a / d * b; /* evita overflow: divide antes de multiplicar */

    printf("MDC: %lld\n", d);
    printf("MMC: %lld\n", m);

    return 0;
}
