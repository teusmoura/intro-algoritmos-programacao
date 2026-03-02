# 04.04 — Fibonacci

Tema: Laços / Dificuldade: Médio

## Enunciado

Leia N e imprima os primeiros N termos da sequência de Fibonacci separados por espaço.

## Entradas

- Linha 1: inteiro `N` (N ≥ 1)

## Saídas

- Linha 1: N termos separados por espaço

## Exemplos

### Exemplo 1

**Entrada:**
```
8
```

**Saída:**
```
0 1 1 2 3 5 8 13
```

### Exemplo 2

**Entrada:**
```
1
```

**Saída:**
```
0
```

## Restrições

- Sequência começa em 0, 1, 1, 2, 3, ...

## Dicas

- Mantenha dois valores anteriores: `a=0, b=1`. A cada passo: `a, b = b, a+b`.

## Erros comuns

- **Começar em 1:** a sequência começa em 0.
- **Espaço extra no final:** em Python, use `' '.join(...)`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
