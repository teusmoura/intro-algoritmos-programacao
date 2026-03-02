# Decompõe um valor em notas e moedas (denominação mínima).
# Entrada: valor inteiro (reais). Saída: contagem por denominação (somente >0).

valor = int(input())

denominacoes = [100, 50, 20, 10, 5, 2, 1]

for denom in denominacoes:
    qtd = valor // denom
    valor = valor % denom
    if qtd > 0:
        print(f"{qtd} nota(s)/moeda(s) de {denom}")
