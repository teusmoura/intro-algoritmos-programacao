# 04.05 — Contagem Regressiva

Tema: Laços / Dificuldade: Fácil

## Enunciado

Leia um inteiro `N` e imprima a contagem regressiva de `N` até 0, cada número em uma linha.

## Entradas

- Linha 1: inteiro `N` (N ≥ 0)

## Saídas

- N+1 linhas: N, N-1, ..., 1, 0

## Exemplos

### Exemplo 1

**Entrada:**
```
5
```

**Saída:**
```
5
4
3
2
1
0
```

## Restrições

- N ≥ 0.
- Incluir o 0 no final.

## Dicas

- Em Python, use `range(n, -1, -1)`.
- Em C, use `for (i = n; i >= 0; i--)`.

## Erros comuns

- **Parar em 1:** lembre de incluir o 0.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
