# Lê 4 notas, calcula a média e exibe o resultado do aluno.
# Entrada: 4 floats. Saída: "Media: X.X" e resultado.

n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())

media = (n1 + n2 + n3 + n4) / 4

print(f"Media: {media:.1f}")

if media < 5:
    print("Reprovado")
elif media < 7:
    print("Recuperacao")
else:
    print("Aprovado")
