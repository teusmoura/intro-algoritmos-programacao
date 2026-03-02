# Acumula moedas até atingir a meta.
# Entrada: meta, depois valores de moedas. Saída: "Total: R$ X.XX"

meta  = float(input())
total = 0.0

while total < meta:
    moeda  = float(input())
    total += moeda

print(f"Total: R$ {total:.2f}")
