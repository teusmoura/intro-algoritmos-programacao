/*
 * Substitui 'a' por '@' e 'e' por '3' em um texto.
 * Entrada: texto. Saida: texto modificado.
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main(void) {
    char texto[MAX_LEN];
    int i, len;

    fgets(texto, MAX_LEN, stdin);

    len = strlen(texto);
    for (i = 0; i < len; i++) {
        if (texto[i] == 'a') {
            putchar('@');
        } else if (texto[i] == 'e') {
            putchar('3');
        } else if (texto[i] != '\n') {
            putchar(texto[i]);
        }
    }
    printf("\n");

    return 0;
}
