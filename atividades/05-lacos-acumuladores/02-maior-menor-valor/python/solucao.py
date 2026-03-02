# Lê N inteiros e encontra o maior e menor.
# Entrada: N, depois N inteiros. Saída: "Maior: X", "Menor: Y"

n = int(input())

primeiro = int(input())
maior = primeiro
menor = primeiro

for _ in range(n - 1):
    v = int(input())
    if v > maior:
        maior = v
    if v < menor:
        menor = v

print(f"Maior: {maior}")
print(f"Menor: {menor}")
