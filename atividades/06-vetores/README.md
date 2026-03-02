# 06 — Vetores (Listas / Arrays)

## Enunciado

Leia `n` números inteiros e armazene-os em um vetor (lista). Em seguida, imprima os elementos
em ordem **inversa**, um por linha.

## Entradas

- Linha 1: inteiro positivo `n` (1 ≤ n ≤ 100)
- Próximas `n` linhas: um inteiro por linha

## Saídas

- `n` linhas com os elementos em ordem inversa

## Exemplos

### Exemplo 1

**Entrada:**
```
5
10
20
30
40
50
```

**Saída:**
```
50
40
30
20
10
```

### Exemplo 2

**Entrada:**
```
3
7
3
9
```

**Saída:**
```
9
3
7
```

## Restrições

- Use obrigatoriamente um vetor/lista para armazenar os valores antes de imprimir.
- Não utilize funções prontas de reversão (ex.: `list.reverse()` ou `reversed()`).
- 1 ≤ n ≤ 100

## Dicas

- Em Python, crie uma lista vazia e use `append()` para adicionar elementos. Acesse pelo índice `lista[i]`.
- Em C, declare um array de inteiros com tamanho fixo: `int v[100]`. Use o índice para acessar.
- Para percorrer ao contrário, use um laço começando em `n-1` e indo até `0`.

## Erros comuns

- **Índice fora do limite em C:** declarar `int v[n]` com n lido em tempo de execução é válido em C99
  mas pode causar problemas com n muito grande. Use um tamanho máximo seguro.
- **Imprimir durante a leitura:** armazene primeiro, depois imprima — não misture as duas etapas.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
