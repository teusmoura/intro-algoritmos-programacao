# Converte Celsius para Fahrenheit e vice-versa.
# Entrada: Celsius (linha 1), Fahrenheit (linha 2).

celsius    = float(input())
fahrenheit = float(input())

# C -> F
f_result = celsius * 9.0 / 5.0 + 32

# F -> C
c_result = (fahrenheit - 32) * 5.0 / 9.0

print(f"{celsius:.1f} C = {f_result:.1f} F")
print(f"{fahrenheit:.1f} F = {c_result:.1f} C")
