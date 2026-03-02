# 03.05 — Conta de Água

Tema: Condicionais / Dificuldade: Médio

## Enunciado

Calcule o valor da conta de água conforme a tabela de consumo progressivo:

- Até 10 m³: R$ 15,00 (fixo)
- De 11 a 20 m³: R$ 1,20 por m³ acima de 10
- De 21 a 50 m³: R$ 1,00 por m³ acima de 20
- Acima de 50 m³: R$ 0,80 por m³ acima de 50

## Entradas

- Linha 1: consumo em m³ (inteiro)

## Saídas

- Linha 1: `Valor: R$ X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
15
```

**Saída:**
```
Valor: R$ 21.00
```

### Exemplo 2

**Entrada:**
```
55
```

**Saída:**
```
Valor: R$ 61.00
```

## Restrições

- Consumo é inteiro positivo.
- As faixas são acumulativas (cobra a taxa da faixa anterior até o limite da faixa).

## Dicas

- Calcule o valor faixa por faixa, acumulando.

## Erros comuns

- **Cobrar apenas a última faixa:** as faixas são cumulativas.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
