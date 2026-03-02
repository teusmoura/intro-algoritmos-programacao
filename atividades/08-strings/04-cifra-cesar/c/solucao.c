/*
 * Aplica a Cifra de Cesar a um texto com deslocamento dado.
 * Entrada: texto (linha 1), deslocamento (linha 2). Saida: texto cifrado.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1001

int main(void) {
    char texto[MAX_LEN];
    int deslocamento, i, len;
    char c;

    fgets(texto, MAX_LEN, stdin);
    /* remove newline */
    len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') texto[len - 1] = '\0';

    scanf("%d", &deslocamento);

    len = strlen(texto);
    for (i = 0; i < len; i++) {
        c = texto[i];
        if (isupper(c)) {
            printf("%c", (c - 'A' + deslocamento) % 26 + 'A');
        } else if (islower(c)) {
            printf("%c", (c - 'a' + deslocamento) % 26 + 'a');
        } else {
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}
