# Converte total de segundos para formato HH:MM:SS.
# Entrada: inteiro (segundos). Saída: "HH:MM:SS"

total = int(input())

horas   = total // 3600
minutos = (total % 3600) // 60
segundos = total % 60

print(f"{horas:02d}:{minutos:02d}:{segundos:02d}")
