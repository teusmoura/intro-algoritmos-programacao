/*
 * Calcula o fatorial de n usando laco.
 * Entrada: n (0 <= n <= 20). Saida: n!
 */

#include <stdio.h>

int main(void) {
    int n, i;
    long long fatorial = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%lld\n", fatorial);

    return 0;
}
