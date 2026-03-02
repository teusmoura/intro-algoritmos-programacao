/*
 * Conta vogais, consoantes e espacos em uma linha de texto.
 * Entrada: linha. Saida: "Vogais: X", "Consoantes: Y", "Espacos: Z"
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1001

int main(void) {
    char texto[MAX_LEN];
    int i, vogais = 0, consoantes = 0, espacos = 0;
    char c;

    fgets(texto, MAX_LEN, stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        c = texto[i];
        if (c == ' ') {
            espacos++;
        } else if (isalpha(c)) {
            char cl = tolower(c);
            if (cl=='a' || cl=='e' || cl=='i' || cl=='o' || cl=='u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("Vogais: %d\n",     vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Espacos: %d\n",    espacos);

    return 0;
}
