# Lê produção de 7 dias e calcula total e dia de pico.
# Saída: "Total: X" e "Pico no dia Y"

total    = 0
pico     = 0
dia_pico = 1

for dia in range(1, 8):
    prod   = int(input())
    total += prod
    if prod > pico:
        pico     = prod
        dia_pico = dia

print(f"Total: {total}")
print(f"Pico no dia {dia_pico}")
