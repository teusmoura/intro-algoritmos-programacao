/*
 * Acumula moedas ate atingir a meta.
 * Entrada: meta, depois valores de moedas. Saida: "Total: R$ X.XX"
 */

#include <stdio.h>

int main(void) {
    double meta, total = 0.0, moeda;

    scanf("%lf", &meta);

    while (total < meta) {
        scanf("%lf", &moeda);
        total += moeda;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
