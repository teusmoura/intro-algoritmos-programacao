# Busca linear: encontra índice (base 0) do alvo em um vetor.
# Entrada: N, N inteiros, alvo. Saída: "Indice: X" ou "Nao encontrado"

n    = int(input())
vetor = [int(input()) for _ in range(n)]
alvo  = int(input())

indice = -1
for i, v in enumerate(vetor):
    if v == alvo:
        indice = i
        break

if indice != -1:
    print(f"Indice: {indice}")
else:
    print("Nao encontrado")
