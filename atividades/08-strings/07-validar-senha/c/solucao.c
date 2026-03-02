/*
 * Valida senha: minimo 8 chars e pelo menos 1 digito.
 * Entrada: senha. Saida: "Senha valida" ou "Senha invalida"
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 201

int main(void) {
    char senha[MAX_LEN];
    int i, len, tem_digito = 0;

    scanf("%200s", senha);

    len = strlen(senha);

    for (i = 0; i < len; i++) {
        if (isdigit(senha[i])) {
            tem_digito = 1;
            break;
        }
    }

    if (len >= 8 && tem_digito) {
        printf("Senha valida\n");
    } else {
        printf("Senha invalida\n");
    }

    return 0;
}
