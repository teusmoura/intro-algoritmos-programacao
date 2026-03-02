# Lê n inteiros, armazena em uma lista e imprime na ordem inversa.
# Nao usa list.reverse() nem reversed() — percorre com indice.

n = int(input())

numeros = []
for _ in range(n):
    numeros.append(int(input()))

# Percorre do ultimo elemento ate o primeiro
for i in range(n - 1, -1, -1):
    print(numeros[i])
