/*
 * Le dois inteiros e os troca usando variavel auxiliar.
 * Entrada: a e b. Saida: valores apos a troca.
 */

#include <stdio.h>

int main(void) {
    int a, b, aux;

    scanf("%d", &a);
    scanf("%d", &b);

    /* Troca usando variavel auxiliar */
    aux = a;
    a   = b;
    b   = aux;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
