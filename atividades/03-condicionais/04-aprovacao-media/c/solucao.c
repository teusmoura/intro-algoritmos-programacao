/*
 * Le 4 notas, calcula a media e exibe o resultado do aluno.
 * Entrada: 4 floats. Saida: "Media: X.X" e resultado.
 */

#include <stdio.h>

int main(void) {
    double n1, n2, n3, n4, media;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("Media: %.1f\n", media);

    if (media < 5.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {
        printf("Recuperacao\n");
    } else {
        printf("Aprovado\n");
    }

    return 0;
}
