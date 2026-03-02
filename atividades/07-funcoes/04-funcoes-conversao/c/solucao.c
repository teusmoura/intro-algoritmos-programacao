/*
 * Funcoes de conversao: Celsius->Fahrenheit e segundos->HH:MM:SS.
 * Entrada: Celsius, segundos. Saida: conversoes formatadas.
 */

#include <stdio.h>

double celsius_para_fahrenheit(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

void segundos_para_hhmmss(int s, int *h, int *m, int *sg) {
    *h  = s / 3600;
    *m  = (s % 3600) / 60;
    *sg = s % 60;
}

int main(void) {
    double celsius, f;
    int segundos, h, m, sg;

    scanf("%lf", &celsius);
    scanf("%d",  &segundos);

    f = celsius_para_fahrenheit(celsius);
    printf("%.1f C = %.1f F\n", celsius, f);

    segundos_para_hhmmss(segundos, &h, &m, &sg);
    printf("%02d:%02d:%02d\n", h, m, sg);

    return 0;
}
