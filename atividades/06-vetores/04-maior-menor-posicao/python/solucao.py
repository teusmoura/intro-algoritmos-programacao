# Encontra maior e menor de N inteiros com suas posições.
# Entrada: N, N inteiros. Saída: maior e menor com posição (base 0).

n     = int(input())
vetor = [int(input()) for _ in range(n)]

pos_maior = 0
pos_menor = 0

for i in range(1, n):
    if vetor[i] > vetor[pos_maior]:
        pos_maior = i
    if vetor[i] < vetor[pos_menor]:
        pos_menor = i

print(f"Maior: {vetor[pos_maior]} na posicao {pos_maior}")
print(f"Menor: {vetor[pos_menor]} na posicao {pos_menor}")
