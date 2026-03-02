/*
 * Verifica se uma palavra e palindromo (case-insensitive).
 * Entrada: palavra. Saida: "palindromo" ou "nao e palindromo"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 201

int main(void) {
    char palavra[MAX_LEN];
    int i, len, palindromo = 1;

    scanf("%200s", palavra);

    /* Converter para minusculas */
    len = strlen(palavra);
    for (i = 0; i < len; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    /* Comparar inicio com fim */
    for (i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("palindromo\n");
    } else {
        printf("nao e palindromo\n");
    }

    return 0;
}
