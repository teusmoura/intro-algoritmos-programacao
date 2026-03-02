# Calcula MDC (algoritmo de Euclides) e MMC.
# Entrada: a, b. Saída: "MDC: X" e "MMC: Y"

def mdc(a, b):
    """Retorna o Máximo Divisor Comum usando o algoritmo de Euclides."""
    while b != 0:
        a, b = b, a % b
    return a

a = int(input())
b = int(input())

d = mdc(a, b)
m = a * b // d

print(f"MDC: {d}")
print(f"MMC: {m}")
