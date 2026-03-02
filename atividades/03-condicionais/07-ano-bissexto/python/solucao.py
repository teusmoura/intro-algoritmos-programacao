# Verifica se um ano é bissexto.
# Entrada: ano (inteiro). Saída: "bissexto" ou "nao bissexto"

ano = int(input())

if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
    print("bissexto")
else:
    print("nao bissexto")
