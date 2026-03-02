/*
 * Lê dois inteiros e imprime o maior usando uma funcao.
 */

#include <stdio.h>

/* Retorna o maior entre dois inteiros */
int maior(int a, int b) {
    if (a >= b) {
        return a;
    }
    return b;
}

int main(void) {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", maior(a, b));

    return 0;
}
