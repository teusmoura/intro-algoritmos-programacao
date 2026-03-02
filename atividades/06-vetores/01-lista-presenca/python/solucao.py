# Lê N nomes e imprime lista de presença numerada.
# Entrada: N, depois N nomes. Saída: lista numerada.

n = int(input())
nomes = [input() for _ in range(n)]

print("Lista de presenca:")
for i, nome in enumerate(nomes, start=1):
    print(f"{i}. {nome}")
