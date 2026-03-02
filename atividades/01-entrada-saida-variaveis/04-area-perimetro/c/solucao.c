/*
 * Calcula area e perimetro de retangulo e circulo.
 * Entrada: comprimento, largura, raio. Saida: 4 valores formatados.
 */

#include <stdio.h>

#define PI 3.14159

int main(void) {
    double comprimento, largura, raio;
    double area_ret, perim_ret, area_cir, perim_cir;

    scanf("%lf", &comprimento);
    scanf("%lf", &largura);
    scanf("%lf", &raio);

    /* Retangulo */
    area_ret  = comprimento * largura;
    perim_ret = 2.0 * (comprimento + largura);

    /* Circulo */
    area_cir  = PI * raio * raio;
    perim_cir = 2.0 * PI * raio;

    printf("Area retangulo: %.2f\n",      area_ret);
    printf("Perimetro retangulo: %.2f\n", perim_ret);
    printf("Area circulo: %.2f\n",        area_cir);
    printf("Perimetro circulo: %.2f\n",   perim_cir);

    return 0;
}
