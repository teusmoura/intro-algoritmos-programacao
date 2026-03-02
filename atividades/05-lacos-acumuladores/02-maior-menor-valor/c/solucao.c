/*
 * Le N inteiros e encontra o maior e menor.
 * Entrada: N, depois N inteiros. Saida: "Maior: X", "Menor: Y"
 */

#include <stdio.h>

int main(void) {
    int n, i, v, maior, menor;

    scanf("%d", &n);
    scanf("%d", &v);
    maior = menor = v;

    for (i = 1; i < n; i++) {
        scanf("%d", &v);
        if (v > maior) maior = v;
        if (v < menor) menor = v;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
