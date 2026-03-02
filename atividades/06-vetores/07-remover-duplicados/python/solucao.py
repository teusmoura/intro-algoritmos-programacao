# Remove duplicatas de N inteiros mantendo a ordem de primeira ocorrência.
# Entrada: N, N inteiros. Saída: únicos, um por linha.

n     = int(input())
vetor = [int(input()) for _ in range(n)]

vistos = set()
for v in vetor:
    if v not in vistos:
        vistos.add(v)
        print(v)
