# Calcula montante e juros compostos.
# Entrada: capital, taxa (%), tempo (anos). Saída: Montante e Juros.

capital = float(input())
taxa    = float(input())
tempo   = float(input())

montante = capital * (1 + taxa / 100) ** tempo
juros    = montante - capital

print(f"Montante: {montante:.2f}")
print(f"Juros: {juros:.2f}")
