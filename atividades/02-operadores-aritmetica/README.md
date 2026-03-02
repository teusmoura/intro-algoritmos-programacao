# 02 — Operadores e Aritmética

## Enunciado

Leia dois números reais e imprima os resultados das quatro operações aritméticas básicas
(adição, subtração, multiplicação e divisão), cada um em uma linha.

## Entradas

- Linha 1: primeiro número real `a`
- Linha 2: segundo número real `b` (garantidamente diferente de zero)

## Saídas

- Linha 1: `a + b = <resultado>`
- Linha 2: `a - b = <resultado>`
- Linha 3: `a * b = <resultado>`
- Linha 4: `a / b = <resultado>`

Todos os resultados com **2 casas decimais**.

## Exemplos

### Exemplo 1

**Entrada:**
```
10
4
```

**Saída:**
```
a + b = 14.00
a - b = 6.00
a * b = 40.00
a / b = 2.50
```

### Exemplo 2

**Entrada:**
```
7.5
2.5
```

**Saída:**
```
a + b = 10.00
a - b = 5.00
a * b = 18.75
a / b = 3.00
```

## Restrições

- Não utilize bibliotecas externas.
- `b` nunca será zero (não é necessário tratar divisão por zero).
- Os resultados devem ter exatamente 2 casas decimais.

## Dicas

- Em Python, use `float(input())` para ler números reais e `f"{valor:.2f}"` para formatar.
- Em C, use `double` e `scanf("%lf", &a)`. Para imprimir com 2 casas: `printf("%.2f\n", resultado)`.
- A divisão inteira em Python é `//`; a divisão real é `/`. Garanta que as variáveis sejam `float`.

## Erros comuns

- **Divisão inteira em C:** se `a` e `b` forem `int`, `a/b` descarta o decimal. Use `double`.
- **Arredondamento inesperado:** ponto flutuante tem limitações; `%.2f` cuida da exibição.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
