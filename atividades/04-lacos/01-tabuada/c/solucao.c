/*
 * Imprime a tabuada de n de 1 a 10.
 * Entrada: inteiro n. Saida: "n x i = resultado"
 */

#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
