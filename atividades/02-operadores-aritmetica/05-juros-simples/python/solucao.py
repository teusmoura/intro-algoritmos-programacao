# Calcula juros simples e montante.
# Entrada: capital, taxa (%), tempo (anos). Saída: Juros e Montante.

capital = float(input())
taxa    = float(input())
tempo   = float(input())

juros    = capital * taxa * tempo / 100
montante = capital + juros

print(f"Juros: {juros:.2f}")
print(f"Montante: {montante:.2f}")
