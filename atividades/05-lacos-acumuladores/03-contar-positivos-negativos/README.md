# 05.03 — Contar Positivos, Negativos e Zeros

Tema: Laços e Acumuladores / Dificuldade: Fácil

## Enunciado

Leia N inteiros e conte quantos são positivos, negativos e zeros.

## Entradas

- Linha 1: N (quantidade)
- Linhas 2 a N+1: N inteiros

## Saídas

- Linha 1: `Positivos: X`
- Linha 2: `Negativos: Y`
- Linha 3: `Zeros: Z`

## Exemplos

### Exemplo 1

**Entrada:**
```
6
3
-1
0
5
-2
0
```

**Saída:**
```
Positivos: 2
Negativos: 2
Zeros: 2
```

## Restrições

- N ≥ 1.

## Dicas

- Use três contadores iniciados em 0.

## Erros comuns

- **Confundir positivo com não-negativo:** 0 não é positivo nem negativo.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
