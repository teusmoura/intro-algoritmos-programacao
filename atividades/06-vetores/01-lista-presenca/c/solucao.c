/*
 * Le N nomes e imprime lista de presenca numerada.
 * Entrada: N, depois N nomes. Saida: lista numerada.
 */

#include <stdio.h>

#define MAX_N    100
#define MAX_NOME 101

int main(void) {
    int n, i;
    char nomes[MAX_N][MAX_NOME];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%100s", nomes[i]);
    }

    printf("Lista de presenca:\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    return 0;
}
