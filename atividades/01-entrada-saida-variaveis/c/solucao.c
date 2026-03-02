/*
 * Lê nome (string) e idade (inteiro) e imprime uma mensagem de apresentacao.
 * Entrada: nome na primeira linha, idade na segunda linha.
 * Saida: "Ola, <nome>! Voce tem <idade> anos."
 */

#include <stdio.h>

int main(void) {
    char nome[101]; /* nome com ate 100 caracteres */
    int idade;

    scanf("%100s", nome);  /* le uma palavra (sem espacos) */
    scanf("%d", &idade);

    printf("Ola, %s! Voce tem %d anos.\n", nome, idade);

    return 0;
}
