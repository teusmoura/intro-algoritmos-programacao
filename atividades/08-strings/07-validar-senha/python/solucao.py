# Valida senha: mínimo 8 chars e pelo menos 1 dígito.
# Entrada: senha. Saída: "Senha valida" ou "Senha invalida"

senha = input()

tem_tamanho = len(senha) >= 8
tem_digito  = any(c.isdigit() for c in senha)

if tem_tamanho and tem_digito:
    print("Senha valida")
else:
    print("Senha invalida")
