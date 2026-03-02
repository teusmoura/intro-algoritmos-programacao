/*
 * Calcula juros simples e montante.
 * Entrada: capital, taxa (%), tempo (anos). Saida: Juros e Montante.
 */

#include <stdio.h>

int main(void) {
    double capital, taxa, tempo;
    double juros, montante;

    scanf("%lf", &capital);
    scanf("%lf", &taxa);
    scanf("%lf", &tempo);

    juros    = capital * taxa * tempo / 100.0;
    montante = capital + juros;

    printf("Juros: %.2f\n",    juros);
    printf("Montante: %.2f\n", montante);

    return 0;
}
