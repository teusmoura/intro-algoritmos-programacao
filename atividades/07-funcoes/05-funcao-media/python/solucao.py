# Calcula a média de N valores usando uma função dedicada.
# Entrada: N, N floats. Saída: "Media: X.XX"

def media(valores):
    """Retorna a média aritmética dos valores."""
    return sum(valores) / len(valores)

n      = int(input())
valores = [float(input()) for _ in range(n)]

print(f"Media: {media(valores):.2f}")
