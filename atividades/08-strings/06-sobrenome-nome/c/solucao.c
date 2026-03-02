/*
 * Converte "Nome Sobrenome" para "SOBRENOME, Nome".
 * Entrada: "Nome Sobrenome". Saida: "SOBRENOME, Nome"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 101

int main(void) {
    char nome[MAX_LEN], sobrenome[MAX_LEN];
    int i, len;

    scanf("%100s %100s", nome, sobrenome);

    /* Converter sobrenome para maiusculas */
    len = strlen(sobrenome);
    for (i = 0; i < len; i++) {
        sobrenome[i] = toupper(sobrenome[i]);
    }

    printf("%s, %s\n", sobrenome, nome);

    return 0;
}
