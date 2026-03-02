/*
 * Calcula o valor da conta de agua com tarifacao progressiva.
 * Entrada: consumo em m^3 (inteiro). Saida: "Valor: R$ X.XX"
 */

#include <stdio.h>

int main(void) {
    int consumo;
    double valor = 15.00; /* taxa fixa ate 10 m^3 */

    scanf("%d", &consumo);

    if (consumo > 10) {
        int extra = consumo - 10;
        if (extra > 10) extra = 10;
        valor += extra * 1.20;
    }
    if (consumo > 20) {
        int extra = consumo - 20;
        if (extra > 30) extra = 30;
        valor += extra * 1.00;
    }
    if (consumo > 50) {
        valor += (consumo - 50) * 0.80;
    }

    printf("Valor: R$ %.2f\n", valor);

    return 0;
}
