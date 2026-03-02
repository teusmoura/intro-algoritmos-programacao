# Verifica se três lados formam triângulo e classifica.
# Entrada: a, b, c (floats). Saída: tipo ou "Nao forma triangulo".

a = float(input())
b = float(input())
c = float(input())

# Verificação de triângulo válido
if a < b + c and b < a + c and c < a + b:
    if a == b == c:
        print("equilatero")
    elif a == b or b == c or a == c:
        print("isosceles")
    else:
        print("escaleno")
else:
    print("Nao forma triangulo")
