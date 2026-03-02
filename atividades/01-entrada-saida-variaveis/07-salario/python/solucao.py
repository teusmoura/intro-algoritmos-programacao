# Calcula desconto e salário líquido a partir do salário bruto e percentual.
# Entrada: salario_bruto, percentual. Saída: bruto, desconto, líquido.

salario_bruto = float(input())
percentual    = float(input())

desconto        = salario_bruto * (percentual / 100)
salario_liquido = salario_bruto - desconto

print(f"Salario bruto: {salario_bruto:.2f}")
print(f"Desconto: {desconto:.2f}")
print(f"Salario liquido: {salario_liquido:.2f}")
