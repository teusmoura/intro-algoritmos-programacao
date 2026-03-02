# Imprime a ação do semáforo conforme a cor informada.
# Entrada: "R", "Y" ou "G". Saída: "Pare", "Atencao" ou "Siga".

cor = input().strip()

if cor == "R":
    print("Pare")
elif cor == "Y":
    print("Atencao")
else:
    print("Siga")
