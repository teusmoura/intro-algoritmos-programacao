# Aplica a Cifra de César a um texto com deslocamento dado.
# Entrada: texto (linha 1), deslocamento (linha 2). Saída: texto cifrado.

texto        = input()
deslocamento = int(input())

resultado = []
for c in texto:
    if c.isupper():
        # Desloca dentro do alfabeto maiúsculo (A-Z)
        resultado.append(chr((ord(c) - ord('A') + deslocamento) % 26 + ord('A')))
    elif c.islower():
        # Desloca dentro do alfabeto minúsculo (a-z)
        resultado.append(chr((ord(c) - ord('a') + deslocamento) % 26 + ord('a')))
    else:
        resultado.append(c)

print(''.join(resultado))
