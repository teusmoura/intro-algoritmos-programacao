/*
 * Calculadora com menu: 1=+, 2=-, 3=*, 4=/.
 * Entrada: operacao, a, b. Saida: "Resultado: X.XX"
 */

#include <stdio.h>

double somar(double a, double b)       { return a + b; }
double subtrair(double a, double b)    { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b)     { return a / b; }

int main(void) {
    int op;
    double a, b, resultado;

    scanf("%d",  &op);
    scanf("%lf", &a);
    scanf("%lf", &b);

    switch (op) {
        case 1: resultado = somar(a, b);        break;
        case 2: resultado = subtrair(a, b);     break;
        case 3: resultado = multiplicar(a, b);  break;
        default: resultado = dividir(a, b);     break;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
