/*
 * Calcula montante e juros compostos.
 * Entrada: capital, taxa (%), tempo (anos). Saida: Montante e Juros.
 * Compilar com: gcc c/solucao.c -o solucao -lm
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double capital, taxa, tempo;
    double montante, juros;

    scanf("%lf", &capital);
    scanf("%lf", &taxa);
    scanf("%lf", &tempo);

    montante = capital * pow(1.0 + taxa / 100.0, tempo);
    juros    = montante - capital;

    printf("Montante: %.2f\n", montante);
    printf("Juros: %.2f\n",    juros);

    return 0;
}
