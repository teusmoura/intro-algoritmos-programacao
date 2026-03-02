# Conta vogais, consoantes e espaços em uma linha de texto.
# Entrada: linha. Saída: "Vogais: X", "Consoantes: Y", "Espacos: Z"

texto = input()

vogais     = 0
consoantes = 0
espacos    = 0

for c in texto:
    if c == ' ':
        espacos += 1
    elif c.isalpha():
        if c.lower() in 'aeiou':
            vogais += 1
        else:
            consoantes += 1

print(f"Vogais: {vogais}")
print(f"Consoantes: {consoantes}")
print(f"Espacos: {espacos}")
