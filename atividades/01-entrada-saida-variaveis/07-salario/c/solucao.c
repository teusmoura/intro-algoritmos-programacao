/*
 * Calcula desconto e salario liquido a partir do salario bruto e percentual.
 * Entrada: salario_bruto, percentual. Saida: bruto, desconto, liquido.
 */

#include <stdio.h>

int main(void) {
    double salario_bruto, percentual;
    double desconto, salario_liquido;

    scanf("%lf", &salario_bruto);
    scanf("%lf", &percentual);

    desconto        = salario_bruto * (percentual / 100.0);
    salario_liquido = salario_bruto - desconto;

    printf("Salario bruto: %.2f\n",    salario_bruto);
    printf("Desconto: %.2f\n",         desconto);
    printf("Salario liquido: %.2f\n",  salario_liquido);

    return 0;
}
