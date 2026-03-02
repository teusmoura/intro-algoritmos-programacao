# Lista primos no intervalo [2, N] usando função eh_primo.
# Entrada: N. Saída: primos, um por linha, e "Total: X primos"

import math

def eh_primo(n):
    """Retorna True se n é primo, False caso contrário."""
    if n < 2:
        return False
    for d in range(2, int(math.sqrt(n)) + 1):
        if n % d == 0:
            return False
    return True

n     = int(input())
total = 0

for k in range(2, n + 1):
    if eh_primo(k):
        print(k)
        total += 1

print(f"Total: {total} primos")
