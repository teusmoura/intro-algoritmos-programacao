/*
 * Calcula o IMC dado peso e altura.
 * Entrada: peso (kg), altura (m). Saida: "IMC: X.XX"
 */

#include <stdio.h>

int main(void) {
    double peso, altura, imc;

    scanf("%lf", &peso);
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    return 0;
}
