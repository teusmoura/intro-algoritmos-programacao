# Imprime contagem regressiva de N até 0.
# Entrada: N (inteiro >= 0). Saída: N, N-1, ..., 0 cada um em linha.

n = int(input())

for i in range(n, -1, -1):
    print(i)
