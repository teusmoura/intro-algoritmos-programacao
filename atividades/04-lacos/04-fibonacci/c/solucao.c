/*
 * Imprime os primeiros N termos da sequencia de Fibonacci.
 * Entrada: N (inteiro). Saida: termos separados por espaco.
 */

#include <stdio.h>

int main(void) {
    int n, i;
    long long a = 0, b = 1, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%lld", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");

    return 0;
}
