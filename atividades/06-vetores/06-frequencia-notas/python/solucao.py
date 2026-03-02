# Conta a frequência de cada nota (0-10) e imprime histograma.
# Entrada: N, N inteiros. Saída: "Nota i: X" para i=0..10

n = int(input())

freq = [0] * 11  # índice 0 a 10

for _ in range(n):
    nota = int(input())
    freq[nota] += 1

for i in range(11):
    print(f"Nota {i}: {freq[i]}")
