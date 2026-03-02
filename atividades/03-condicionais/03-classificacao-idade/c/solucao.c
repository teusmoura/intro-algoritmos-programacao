/*
 * Classifica a pessoa por faixa etaria.
 * Entrada: idade (inteiro). Saida: classificacao.
 */

#include <stdio.h>

int main(void) {
    int idade;

    scanf("%d", &idade);

    if (idade <= 12) {
        printf("crianca\n");
    } else if (idade <= 17) {
        printf("adolescente\n");
    } else if (idade <= 59) {
        printf("adulto\n");
    } else {
        printf("idoso\n");
    }

    return 0;
}
