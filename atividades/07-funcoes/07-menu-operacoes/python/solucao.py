# Calculadora com menu: 1=+, 2=-, 3=*, 4=/.
# Entrada: operação, a, b. Saída: "Resultado: X.XX"

def somar(a, b):       return a + b
def subtrair(a, b):    return a - b
def multiplicar(a, b): return a * b
def dividir(a, b):     return a / b

op = int(input())
a  = float(input())
b  = float(input())

operacoes = {1: somar, 2: subtrair, 3: multiplicar, 4: dividir}
resultado = operacoes[op](a, b)

print(f"Resultado: {resultado:.2f}")
