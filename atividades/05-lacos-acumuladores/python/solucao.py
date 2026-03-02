# Lê n numeros reais e calcula a soma e a media.
# Imprime "Soma: X.XX" e "Media: X.XX".

n = int(input())

soma = 0.0
for _ in range(n):
    valor = float(input())
    soma += valor

media = soma / n

print(f"Soma: {soma:.2f}")
print(f"Media: {media:.2f}")
