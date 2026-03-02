# Calcula o valor da conta de água com tarifação progressiva.
# Entrada: consumo em m³ (inteiro). Saída: "Valor: R$ X.XX"

consumo = int(input())

valor = 15.00  # taxa fixa até 10 m³

if consumo > 10:
    valor += min(consumo - 10, 10) * 1.20  # faixa 11-20

if consumo > 20:
    valor += min(consumo - 20, 30) * 1.00  # faixa 21-50

if consumo > 50:
    valor += (consumo - 50) * 0.80         # acima de 50

print(f"Valor: R$ {valor:.2f}")
