# Calcula a soma 1 + 2 + ... + N.
# Entrada: N (inteiro). Saída: soma total.

n = int(input())

soma = 0
for i in range(1, n + 1):
    soma += i

print(soma)
