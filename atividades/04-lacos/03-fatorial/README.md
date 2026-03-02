# 04.03 — Fatorial

Tema: Laços / Dificuldade: Fácil

## Enunciado

Leia um inteiro não-negativo `n` e imprima o fatorial de `n`.

## Entradas

- Linha 1: inteiro `n` (0 ≤ n ≤ 20)

## Saídas

- Linha 1: n!

## Exemplos

### Exemplo 1

**Entrada:**
```
5
```

**Saída:**
```
120
```

### Exemplo 2

**Entrada:**
```
0
```

**Saída:**
```
1
```

## Restrições

- 0! = 1 por definição.
- 0 ≤ n ≤ 20 (cabe em long long).

## Dicas

- Inicie o acumulador em 1 e multiplique de 1 a n.

## Erros comuns

- **0! = 0:** por definição matemática, 0! = 1.
- **Overflow:** para n ≤ 20, use `long long` em C.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
