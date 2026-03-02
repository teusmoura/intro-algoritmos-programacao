# Lê inteiros até obter um no intervalo [minimo, maximo].
# Entrada: minimo maximo (linha 1), depois inteiros até válido.

def ler_inteiro_intervalo(minimo, maximo):
    """Lê e retorna o primeiro inteiro no intervalo [minimo, maximo]."""
    while True:
        n = int(input())
        if minimo <= n <= maximo:
            return n

linha  = input().split()
minimo = int(linha[0])
maximo = int(linha[1])

valido = ler_inteiro_intervalo(minimo, maximo)
print(f"Valido: {valido}")
