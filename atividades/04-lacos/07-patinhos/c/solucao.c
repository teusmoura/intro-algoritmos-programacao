/*
 * Imprime a musica dos patinhos de N ate 1.
 * Entrada: N (1-10). Saida: N linhas + linha final.
 */

#include <stdio.h>

int main(void) {
    int n, i;

    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d patinho(s) foi(foram) passear, somente %d voltou(voltaram)\n",
               i, i - 1);
    }

    printf("Nenhum patinho voltou para casa\n");

    return 0;
}
