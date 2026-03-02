# 07 — Funções

## Enunciado

Implemente uma função que receba dois inteiros e retorne o **maior** deles.
Leia dois inteiros e imprima o maior usando essa função.

## Entradas

- Linha 1: inteiro `a`
- Linha 2: inteiro `b`

## Saídas

- Linha 1: o maior entre `a` e `b`

## Exemplos

### Exemplo 1

**Entrada:**
```
8
3
```

**Saída:**
```
8
```

### Exemplo 2

**Entrada:**
```
-5
-1
```

**Saída:**
```
-1
```

### Exemplo 3

**Entrada:**
```
4
4
```

**Saída:**
```
4
```

## Restrições

- Implemente **obrigatoriamente** uma função chamada `maior` que receba dois parâmetros e retorne o maior.
- Não utilize funções prontas como `max()` em Python ou `fmax()` de `math.h`.
- Trate o caso em que os dois valores são iguais (retorne qualquer um deles).

## Dicas

- Em Python, defina a função antes de chamá-la: `def maior(a, b): ...`
- Em C, declare e defina a função antes do `main`, ou use protótipo (declaração antecipada).
- Use `if/else` dentro da função para comparar e retornar o maior.

## Erros comuns

- **Esquecer o `return` em C:** sem `return`, a função retorna lixo de memória.
- **Chamar `maior()` mas não usar o retorno:** lembre-se de guardar ou imprimir o valor retornado.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
