# Imprime a música dos patinhos de N até 1.
# Entrada: N (1-10). Saída: N linhas + linha final.

n = int(input())

for i in range(n, 0, -1):
    print(f"{i} patinho(s) foi(foram) passear, somente {i - 1} voltou(voltaram)")

print("Nenhum patinho voltou para casa")
