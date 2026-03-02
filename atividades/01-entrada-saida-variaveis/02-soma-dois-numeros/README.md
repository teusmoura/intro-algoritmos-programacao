# 01.02 — Soma de Dois Números

Tema: Entrada e Saída / Dificuldade: Fácil

## Enunciado

Leia dois números inteiros e imprima a soma deles.

## Entradas

- Linha 1: inteiro `a`
- Linha 2: inteiro `b`

## Saídas

- Linha 1: soma de `a` e `b`

## Exemplos

### Exemplo 1

**Entrada:**
```
3
5
```

**Saída:**
```
8
```

### Exemplo 2

**Entrada:**
```
-4
10
```

**Saída:**
```
6
```

## Restrições

- Os valores podem ser negativos.
- Use apenas a biblioteca padrão.

## Dicas

- Em Python, use `int(input())` para ler inteiros.
- Em C, use `scanf("%d", &a)` para cada variável.

## Erros comuns

- **Ler ambos na mesma linha:** leia um por linha conforme o enunciado.
- **Não converter para inteiro:** em Python, `input()` retorna string.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
