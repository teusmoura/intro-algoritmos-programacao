# Calcula o IMC dado peso e altura.
# Entrada: peso (kg), altura (m). Saída: "IMC: X.XX"

peso   = float(input())
altura = float(input())

imc = peso / (altura ** 2)

print(f"IMC: {imc:.2f}")
