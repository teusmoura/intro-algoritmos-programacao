/*
 * Lê n inteiros, armazena em um array e imprime na ordem inversa.
 * Nao usa funcao de reversao — percorre com indice decrescente.
 */

#include <stdio.h>

#define MAX 100

int main(void) {
    int v[MAX];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    /* imprime do ultimo ao primeiro */
    for (i = n - 1; i >= 0; i--) {
        printf("%d\n", v[i]);
    }

    return 0;
}
