# Classifica notas em categorias A, B, C, D e calcula percentuais.
# Entrada: N, depois N floats. Saída: contagem e percentual de cada categoria.

n = int(input())

a = b = c = d = 0

for _ in range(n):
    nota = float(input())
    if nota >= 9:
        a += 1
    elif nota >= 7:
        b += 1
    elif nota >= 5:
        c += 1
    else:
        d += 1

print(f"A: {a} ({a / n * 100:.1f}%)")
print(f"B: {b} ({b / n * 100:.1f}%)")
print(f"C: {c} ({c / n * 100:.1f}%)")
print(f"D: {d} ({d / n * 100:.1f}%)")
