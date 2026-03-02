# Converte metros para cm e km; horas para minutos e segundos.
# Entrada: metros (linha 1), horas (linha 2).

metros = float(input())
horas  = float(input())

cm = metros * 100
km = metros / 1000

minutos  = horas * 60
segundos = horas * 3600

print(f"{metros} metros = {cm} cm = {km} km")
print(f"{horas} horas = {minutos} minutos = {segundos} segundos")
