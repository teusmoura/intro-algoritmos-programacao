/*
 * Converte metros para cm e km; horas para minutos e segundos.
 * Entrada: metros (linha 1), horas (linha 2).
 */

#include <stdio.h>

int main(void) {
    double metros, horas;
    double cm, km, minutos, segundos;

    scanf("%lf", &metros);
    scanf("%lf", &horas);

    cm = metros * 100.0;
    km = metros / 1000.0;

    minutos  = horas * 60.0;
    segundos = horas * 3600.0;

    printf("%g metros = %g cm = %g km\n",           metros, cm, km);
    printf("%g horas = %g minutos = %g segundos\n", horas, minutos, segundos);

    return 0;
}
