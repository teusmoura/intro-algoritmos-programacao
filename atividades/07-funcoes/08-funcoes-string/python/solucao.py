# Conta vogais e palavras em uma linha de texto.
# Entrada: linha de texto. Saída: "Vogais: X", "Palavras: Y"

def contar_vogais(s):
    """Conta vogais (a, e, i, o, u) em s, ignorando maiúsculas."""
    return sum(1 for c in s.lower() if c in 'aeiou')

def contar_palavras(s):
    """Conta palavras separadas por espaço."""
    return len(s.split())

texto = input()

print(f"Vogais: {contar_vogais(texto)}")
print(f"Palavras: {contar_palavras(texto)}")
