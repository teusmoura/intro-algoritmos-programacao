# Calcula área e perímetro de retângulo e círculo.
# Entrada: comprimento, largura, raio. Saída: 4 valores formatados.

PI = 3.14159

comprimento = float(input())
largura = float(input())
raio = float(input())

# Retângulo
area_ret = comprimento * largura
perim_ret = 2 * (comprimento + largura)

# Círculo
area_cir = PI * raio ** 2
perim_cir = 2 * PI * raio

print(f"Area retangulo: {area_ret:.2f}")
print(f"Perimetro retangulo: {perim_ret:.2f}")
print(f"Area circulo: {area_cir:.2f}")
print(f"Perimetro circulo: {perim_cir:.2f}")
