# Caixa de lanche: soma pedidos até item=0.
# Saída: "Total: R$ X.XX"

precos = {1: 3.50, 2: 5.00, 3: 8.00}
total  = 0.0

while True:
    item = int(input())
    if item == 0:
        break
    qtd    = int(input())
    total += precos[item] * qtd

print(f"Total: R$ {total:.2f}")
