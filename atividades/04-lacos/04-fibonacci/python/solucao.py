# Imprime os primeiros N termos da sequência de Fibonacci.
# Entrada: N (inteiro). Saída: termos separados por espaço.

n = int(input())

termos = []
a, b = 0, 1
for _ in range(n):
    termos.append(str(a))
    a, b = b, a + b

print(' '.join(termos))
