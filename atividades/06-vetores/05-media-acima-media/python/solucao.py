# Calcula a média de N valores e conta quantos estão acima dela.
# Entrada: N, N floats. Saída: "Media: X.XX" e "Acima da media: Y"

n     = int(input())
vetor = [float(input()) for _ in range(n)]

media = sum(vetor) / n
acima = sum(1 for v in vetor if v > media)

print(f"Media: {media:.2f}")
print(f"Acima da media: {acima}")
