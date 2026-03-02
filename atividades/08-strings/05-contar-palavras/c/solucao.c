/*
 * Conta palavras em uma linha de texto.
 * Entrada: linha de texto. Saida: "Palavras: X"
 */

#include <stdio.h>

#define MAX_LEN 1001

int main(void) {
    char texto[MAX_LEN];
    int i, palavras = 0, em_palavra = 0;

    fgets(texto, MAX_LEN, stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ' && texto[i] != '\n') {
            if (!em_palavra) { palavras++; em_palavra = 1; }
        } else {
            em_palavra = 0;
        }
    }

    printf("Palavras: %d\n", palavras);

    return 0;
}
