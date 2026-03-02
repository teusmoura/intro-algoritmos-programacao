# Lê dois inteiros e os troca usando variável auxiliar.
# Entrada: a e b. Saída: valores após a troca.

a = int(input())
b = int(input())

# Troca com variável auxiliar
aux = a
a = b
b = aux

print(f"a = {a}")
print(f"b = {b}")
