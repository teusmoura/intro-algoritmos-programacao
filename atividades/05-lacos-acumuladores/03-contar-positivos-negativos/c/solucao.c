/*
 * Le N inteiros e conta positivos, negativos e zeros.
 * Entrada: N, depois N inteiros. Saida: contagens.
 */

#include <stdio.h>

int main(void) {
    int n, i, v;
    int positivos = 0, negativos = 0, zeros = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &v);
        if (v > 0)      positivos++;
        else if (v < 0) negativos++;
        else            zeros++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n",     zeros);

    return 0;
}
