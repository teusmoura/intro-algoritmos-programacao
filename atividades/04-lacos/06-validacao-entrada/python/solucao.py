# Lê inteiros até obter um no intervalo [1, 10].
# Saída: "Valido: X"

while True:
    n = int(input())
    if 1 <= n <= 10:
        break

print(f"Valido: {n}")
