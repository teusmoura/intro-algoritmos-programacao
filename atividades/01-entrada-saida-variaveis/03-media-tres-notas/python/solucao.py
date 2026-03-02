# Lê três notas e imprime a média com 1 casa decimal.
# Entrada: 3 floats. Saída: "Media: X.X"

n1 = float(input())
n2 = float(input())
n3 = float(input())

media = (n1 + n2 + n3) / 3

print(f"Media: {media:.1f}")
