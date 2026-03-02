/*
 * Imprime a acao do semaforo conforme a cor informada.
 * Entrada: "R", "Y" ou "G". Saida: "Pare", "Atencao" ou "Siga".
 */

#include <stdio.h>

int main(void) {
    char cor;

    scanf(" %c", &cor); /* espaco antes de %c ignora whitespace */

    if (cor == 'R') {
        printf("Pare\n");
    } else if (cor == 'Y') {
        printf("Atencao\n");
    } else {
        printf("Siga\n");
    }

    return 0;
}
