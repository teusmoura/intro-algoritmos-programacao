# 03.02 — Maior e Menor de Três Valores

Tema: Condicionais / Dificuldade: Fácil

## Enunciado

Leia três inteiros e imprima o maior e o menor deles.

## Entradas

- Linha 1: inteiro `a`
- Linha 2: inteiro `b`
- Linha 3: inteiro `c`

## Saídas

- Linha 1: `Maior: X`
- Linha 2: `Menor: Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
5
2
8
```

**Saída:**
```
Maior: 8
Menor: 2
```

## Restrições

- Os três valores podem ser iguais.

## Dicas

- Compare usando `if/elif/else` ou use `max()` e `min()` em Python.

## Erros comuns

- **Usar apenas if sem else:** pode não cobrir todos os casos.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
