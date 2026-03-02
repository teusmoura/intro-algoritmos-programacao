# Encontra o maior e menor de três inteiros.
# Entrada: a, b, c. Saída: "Maior: X" e "Menor: Y"

a = int(input())
b = int(input())
c = int(input())

maior = max(a, b, c)
menor = min(a, b, c)

print(f"Maior: {maior}")
print(f"Menor: {menor}")
