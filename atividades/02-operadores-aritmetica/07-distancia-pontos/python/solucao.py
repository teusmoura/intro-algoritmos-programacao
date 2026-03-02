# Calcula a distância euclidiana entre dois pontos.
# Entrada: x1, y1, x2, y2. Saída: "Distancia: X.XXXX"

import math

x1 = float(input())
y1 = float(input())
x2 = float(input())
y2 = float(input())

distancia = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

print(f"Distancia: {distancia:.4f}")
