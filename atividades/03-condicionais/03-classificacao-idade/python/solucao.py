# Classifica a pessoa por faixa etária.
# Entrada: idade (inteiro). Saída: classificação.

idade = int(input())

if idade <= 12:
    print("crianca")
elif idade <= 17:
    print("adolescente")
elif idade <= 59:
    print("adulto")
else:
    print("idoso")
