/*
 * Caixa de lanche: soma pedidos ate item=0.
 * Saida: "Total: R$ X.XX"
 */

#include <stdio.h>

int main(void) {
    double precos[] = {0.0, 3.50, 5.00, 8.00}; /* indice 1-3 */
    double total = 0.0;
    int item, qtd;

    while (1) {
        scanf("%d", &item);
        if (item == 0) break;
        scanf("%d", &qtd);
        total += precos[item] * qtd;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
