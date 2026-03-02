# Lê dois inteiros e imprime o maior usando uma funcao.


def maior(a, b):
    """Retorna o maior entre dois numeros inteiros."""
    if a >= b:
        return a
    return b


a = int(input())
b = int(input())

print(maior(a, b))
