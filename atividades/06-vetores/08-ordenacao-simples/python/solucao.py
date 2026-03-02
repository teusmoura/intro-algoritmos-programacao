# Ordena N inteiros usando Bubble Sort.
# Entrada: N, N inteiros. Saída: ordenados, um por linha.

n     = int(input())
vetor = [int(input()) for _ in range(n)]

# Bubble Sort
for i in range(n - 1):
    for j in range(n - 1 - i):
        if vetor[j] > vetor[j + 1]:
            vetor[j], vetor[j + 1] = vetor[j + 1], vetor[j]

for v in vetor:
    print(v)
