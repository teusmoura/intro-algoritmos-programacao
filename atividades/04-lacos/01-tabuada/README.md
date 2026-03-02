# 04.01 — Tabuada

Tema: Laços / Dificuldade: Fácil

## Enunciado

Leia um inteiro `n` e imprima a tabuada de `n` de 1 a 10.

## Entradas

- Linha 1: inteiro `n`

## Saídas

- 10 linhas: `n x i = resultado` para i de 1 a 10

## Exemplos

### Exemplo 1

**Entrada:**
```
5
```

**Saída:**
```
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

## Restrições

- Imprimir de 1 a 10.

## Dicas

- Use `for i in range(1, 11)` em Python.
- Em C, use `for (i = 1; i <= 10; i++)`.

## Erros comuns

- **Range errado:** `range(1, 10)` vai só até 9; use `range(1, 11)`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
