# 01.07 — Cálculo de Salário

Tema: Entrada e Saída / Dificuldade: Fácil

## Enunciado

Leia o salário bruto e o percentual de desconto. Calcule e imprima o salário bruto, o valor do desconto e o salário líquido.

## Entradas

- Linha 1: salário bruto (real)
- Linha 2: percentual de desconto (real, entre 0 e 100)

## Saídas

- Linha 1: `Salario bruto: X.XX`
- Linha 2: `Desconto: X.XX`
- Linha 3: `Salario liquido: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
3000.00
15.0
```

**Saída:**
```
Salario bruto: 3000.00
Desconto: 450.00
Salario liquido: 2550.00
```

## Restrições

- Percentual entre 0 e 100.
- Imprimir com 2 casas decimais.

## Dicas

- Desconto = salário × (percentual / 100).
- Salário líquido = salário - desconto.

## Erros comuns

- **Dividir por 100 esquecido:** lembre que o percentual precisa ser convertido para fração.
- **Formato incorreto:** use `.2f`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
