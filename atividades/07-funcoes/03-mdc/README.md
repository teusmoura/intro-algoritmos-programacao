# 07.03 — MDC e MMC

Tema: Funções / Dificuldade: Médio

## Enunciado

Implemente a função `mdc(a, b)` usando o algoritmo de Euclides. Use-a para calcular e imprimir o MDC e o MMC de dois inteiros positivos.

## Entradas

- Linha 1: inteiro `a` (positivo)
- Linha 2: inteiro `b` (positivo)

## Saídas

- Linha 1: `MDC: X`
- Linha 2: `MMC: Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
12
8
```

**Saída:**
```
MDC: 4
MMC: 24
```

## Restrições

- a, b ≥ 1.
- MMC = (a × b) / MDC(a, b).

## Dicas

- Algoritmo de Euclides: `mdc(a, b) = mdc(b, a % b)`, caso base `mdc(a, 0) = a`.

## Erros comuns

- **Overflow no MMC:** use `long long` em C para `a * b`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
