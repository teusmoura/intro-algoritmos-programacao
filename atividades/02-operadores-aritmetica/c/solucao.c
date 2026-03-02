/*
 * Lê dois numeros reais e imprime os resultados das 4 operacoes basicas.
 * Todos os resultados com 2 casas decimais.
 */

#include <stdio.h>

int main(void) {
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    printf("a / b = %.2f\n", a / b);

    return 0;
}
