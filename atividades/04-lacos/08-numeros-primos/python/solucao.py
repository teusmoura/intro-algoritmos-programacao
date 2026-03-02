# Imprime todos os primos no intervalo [2, N].
# Entrada: N (inteiro >= 2). Saída: primos, um por linha.

import math

n = int(input())

for k in range(2, n + 1):
    primo = True
    for d in range(2, int(math.sqrt(k)) + 1):
        if k % d == 0:
            primo = False
            break
    if primo:
        print(k)
