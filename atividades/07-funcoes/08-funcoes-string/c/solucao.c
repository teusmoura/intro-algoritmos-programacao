/*
 * Conta vogais e palavras em uma linha de texto.
 * Entrada: linha de texto. Saida: "Vogais: X", "Palavras: Y"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1001

int contar_vogais(const char *s) {
    int i, count = 0;
    char c;
    for (i = 0; s[i] != '\0'; i++) {
        c = tolower(s[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') count++;
    }
    return count;
}

int contar_palavras(const char *s) {
    int i, count = 0, em_palavra = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            if (!em_palavra) { count++; em_palavra = 1; }
        } else {
            em_palavra = 0;
        }
    }
    return count;
}

int main(void) {
    char texto[MAX_LEN];

    fgets(texto, MAX_LEN, stdin);
    /* remove newline se presente */
    int len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') texto[len - 1] = '\0';

    printf("Vogais: %d\n",   contar_vogais(texto));
    printf("Palavras: %d\n", contar_palavras(texto));

    return 0;
}
