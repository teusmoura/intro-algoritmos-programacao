# Converte "Nome Sobrenome" para "SOBRENOME, Nome".
# Entrada: "Nome Sobrenome". Saída: "SOBRENOME, Nome"

linha = input().split()
nome      = linha[0]
sobrenome = linha[1]

print(f"{sobrenome.upper()}, {nome}")
