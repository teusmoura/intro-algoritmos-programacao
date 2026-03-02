# Lê N inteiros e conta positivos, negativos e zeros.
# Entrada: N, depois N inteiros. Saída: contagens.

n = int(input())

positivos = negativos = zeros = 0

for _ in range(n):
    v = int(input())
    if v > 0:
        positivos += 1
    elif v < 0:
        negativos += 1
    else:
        zeros += 1

print(f"Positivos: {positivos}")
print(f"Negativos: {negativos}")
print(f"Zeros: {zeros}")
