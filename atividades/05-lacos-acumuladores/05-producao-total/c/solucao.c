/*
 * Le producao de 7 dias e calcula total e dia de pico.
 * Saida: "Total: X" e "Pico no dia Y"
 */

#include <stdio.h>

int main(void) {
    int i, prod, total = 0, pico = -1, dia_pico = 1;

    for (i = 1; i <= 7; i++) {
        scanf("%d", &prod);
        total += prod;
        if (prod > pico) {
            pico     = prod;
            dia_pico = i;
        }
    }

    printf("Total: %d\n",        total);
    printf("Pico no dia %d\n",   dia_pico);

    return 0;
}
