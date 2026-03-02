# Calcula consumo médio de combustível em km/l.
# Entrada: distância (km), combustível (litros). Saída: "Consumo: X.XX km/l"

distancia    = float(input())
combustivel  = float(input())

consumo = distancia / combustivel

print(f"Consumo: {consumo:.2f} km/l")
