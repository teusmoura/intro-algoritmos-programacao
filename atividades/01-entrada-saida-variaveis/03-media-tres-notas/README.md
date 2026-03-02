# 01.03 — Média de Três Notas

Tema: Entrada e Saída / Dificuldade: Fácil

## Enunciado

Leia três notas reais e imprima a média aritmética com uma casa decimal.

## Entradas

- Linha 1: nota 1 (real)
- Linha 2: nota 2 (real)
- Linha 3: nota 3 (real)

## Saídas

- Linha 1: `Media: X.X`

## Exemplos

### Exemplo 1

**Entrada:**
```
7.0
8.5
6.5
```

**Saída:**
```
Media: 7.3
```

### Exemplo 2

**Entrada:**
```
10.0
10.0
10.0
```

**Saída:**
```
Media: 10.0
```

## Restrições

- Notas entre 0.0 e 10.0.
- Imprimir com exatamente 1 casa decimal.

## Dicas

- Em Python, use `float(input())` e `:.1f` na f-string.
- Em C, use `%.1f` no `printf`.

## Erros comuns

- **Usar divisão inteira:** certifique-se de que pelo menos um operando seja float.
- **Casas decimais erradas:** use `.1f` para uma casa decimal.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
