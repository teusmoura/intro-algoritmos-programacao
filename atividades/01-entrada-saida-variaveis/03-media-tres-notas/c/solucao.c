/*
 * Le tres notas e imprime a media com 1 casa decimal.
 * Entrada: 3 floats. Saida: "Media: X.X"
 */

#include <stdio.h>

int main(void) {
    double n1, n2, n3, media;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media: %.1f\n", media);

    return 0;
}
