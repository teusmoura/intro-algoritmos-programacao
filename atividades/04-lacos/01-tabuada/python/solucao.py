# Imprime a tabuada de n de 1 a 10.
# Entrada: inteiro n. Saída: "n x i = resultado"

n = int(input())

for i in range(1, 11):
    print(f"{n} x {i} = {n * i}")
