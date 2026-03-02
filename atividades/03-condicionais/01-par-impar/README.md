# 03.01 — Par ou Ímpar

Tema: Condicionais / Dificuldade: Fácil

## Enunciado

Leia um número inteiro e informe se ele é par ou ímpar.

## Entradas

- Linha 1: inteiro `n`

## Saídas

- Linha 1: `par` ou `impar`

## Exemplos

### Exemplo 1

**Entrada:**
```
4
```

**Saída:**
```
par
```

### Exemplo 2

**Entrada:**
```
7
```

**Saída:**
```
impar
```

## Restrições

- `n` pode ser negativo ou zero.

## Dicas

- Use o operador módulo `%`: se `n % 2 == 0`, é par.

## Erros comuns

- **Não tratar negativos:** `%` em Python retorna resultado com sinal do divisor; em C, pode variar. Use `n % 2 == 0` para ambos.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
