# Verifica se uma palavra é palíndromo (case-insensitive).
# Entrada: palavra. Saída: "palindromo" ou "nao e palindromo"

palavra = input().lower()

if palavra == palavra[::-1]:
    print("palindromo")
else:
    print("nao e palindromo")
