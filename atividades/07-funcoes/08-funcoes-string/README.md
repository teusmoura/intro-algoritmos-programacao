# 07.08 — Funções de String

Tema: Funções / Dificuldade: Médio

## Enunciado

Implemente as funções `contar_vogais(s)` e `contar_palavras(s)`. Leia uma linha de texto e imprima a contagem de vogais e de palavras.

## Entradas

- Linha 1: texto (pode conter espaços)

## Saídas

- Linha 1: `Vogais: X`
- Linha 2: `Palavras: Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
Ola mundo
```

**Saída:**
```
Vogais: 4
Palavras: 2
```

## Restrições

- Vogais: a, e, i, o, u (maiúsculas e minúsculas).
- Palavras separadas por espaços (sem espaços duplos).

## Dicas

- Em Python, use `s.lower()` e conte caracteres em `'aeiou'`.
- Palavras = `len(s.split())`.

## Erros comuns

- **Não contar vogais maiúsculas:** converta para minúsculas antes.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
