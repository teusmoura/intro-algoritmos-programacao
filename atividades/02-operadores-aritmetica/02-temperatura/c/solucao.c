/*
 * Converte Celsius para Fahrenheit e vice-versa.
 * Entrada: Celsius (linha 1), Fahrenheit (linha 2).
 */

#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;
    double f_result, c_result;

    scanf("%lf", &celsius);
    scanf("%lf", &fahrenheit);

    f_result = celsius * 9.0 / 5.0 + 32.0;
    c_result = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%.1f C = %.1f F\n", celsius,    f_result);
    printf("%.1f F = %.1f C\n", fahrenheit, c_result);

    return 0;
}
