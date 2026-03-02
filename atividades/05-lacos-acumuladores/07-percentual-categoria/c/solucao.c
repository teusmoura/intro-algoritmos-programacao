/*
 * Classifica notas em categorias A, B, C, D e calcula percentuais.
 * Entrada: N, depois N floats. Saida: contagem e percentual de cada categoria.
 */

#include <stdio.h>

int main(void) {
    int n, i;
    int a = 0, b = 0, c = 0, d = 0;
    double nota;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &nota);
        if (nota >= 9.0)      a++;
        else if (nota >= 7.0) b++;
        else if (nota >= 5.0) c++;
        else                  d++;
    }

    printf("A: %d (%.1f%%)\n", a, (double)a / n * 100);
    printf("B: %d (%.1f%%)\n", b, (double)b / n * 100);
    printf("C: %d (%.1f%%)\n", c, (double)c / n * 100);
    printf("D: %d (%.1f%%)\n", d, (double)d / n * 100);

    return 0;
}
