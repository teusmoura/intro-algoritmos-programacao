/*
 * Verifica se tres lados formam triangulo e classifica.
 * Entrada: a, b, c (floats). Saida: tipo ou "Nao forma triangulo".
 */

#include <stdio.h>

int main(void) {
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("equilatero\n");
        } else if (a == b || b == c || a == c) {
            printf("isosceles\n");
        } else {
            printf("escaleno\n");
        }
    } else {
        printf("Nao forma triangulo\n");
    }

    return 0;
}
