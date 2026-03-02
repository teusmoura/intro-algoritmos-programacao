/*
 * Encontra o maior e menor de tres inteiros.
 * Entrada: a, b, c. Saida: "Maior: X" e "Menor: Y"
 */

#include <stdio.h>

int main(void) {
    int a, b, c, maior, menor;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    /* Determina o maior */
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    /* Determina o menor */
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
