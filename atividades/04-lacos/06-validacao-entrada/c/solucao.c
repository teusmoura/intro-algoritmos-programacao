/*
 * Le inteiros ate obter um no intervalo [1, 10].
 * Saida: "Valido: X"
 */

#include <stdio.h>

int main(void) {
    int n;

    do {
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    printf("Valido: %d\n", n);

    return 0;
}
