# 05.07 — Percentual por Categoria

Tema: Laços e Acumuladores / Dificuldade: Médio

## Enunciado

Leia N notas e classifique cada aluno em: A (≥9), B (7–8.9), C (5–6.9), D (<5). Imprima a contagem e o percentual de cada categoria.

## Entradas

- Linha 1: N (quantidade de alunos)
- Linhas 2 a N+1: notas (reais 0–10)

## Saídas

- Linha 1: `A: X (Y.1f%)`
- Linha 2: `B: X (Y.1f%)`
- Linha 3: `C: X (Y.1f%)`
- Linha 4: `D: X (Y.1f%)`

## Exemplos

### Exemplo 1

**Entrada:**
```
4
9.5
7.0
5.5
3.0
```

**Saída:**
```
A: 1 (25.0%)
B: 1 (25.0%)
C: 1 (25.0%)
D: 1 (25.0%)
```

## Restrições

- N ≥ 1.
- Percentual = contagem / N × 100.

## Dicas

- Use quatro contadores. Percentual = conta / n * 100.

## Erros comuns

- **Limites das categorias:** B inclui 7.0 até 8.9 (não 9.0).

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
