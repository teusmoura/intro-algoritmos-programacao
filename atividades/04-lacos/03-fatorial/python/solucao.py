# Calcula o fatorial de n usando laço.
# Entrada: n (0 <= n <= 20). Saída: n!

n = int(input())

fatorial = 1
for i in range(2, n + 1):
    fatorial *= i

print(fatorial)
