/*
 * Le inteiros ate obter um no intervalo [minimo, maximo].
 * Entrada: minimo maximo (linha 1), depois inteiros ate valido.
 */

#include <stdio.h>

int ler_inteiro_intervalo(int minimo, int maximo) {
    int n;
    do {
        scanf("%d", &n);
    } while (n < minimo || n > maximo);
    return n;
}

int main(void) {
    int minimo, maximo, valido;

    scanf("%d %d", &minimo, &maximo);

    valido = ler_inteiro_intervalo(minimo, maximo);
    printf("Valido: %d\n", valido);

    return 0;
}
