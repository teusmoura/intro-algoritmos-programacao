# Lê inteiros até 0 e calcula soma e quantidade.
# Saída: "Soma: X", "Quantidade: Y"

soma       = 0
quantidade = 0

while True:
    v = int(input())
    if v == 0:
        break
    soma       += v
    quantidade += 1

print(f"Soma: {soma}")
print(f"Quantidade: {quantidade}")
