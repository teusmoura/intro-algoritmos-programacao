# 08.03 — Palíndromo

Tema: Strings / Dificuldade: Fácil

## Enunciado

Leia uma palavra (sem espaços) e verifique se é palíndromo (lê-se igual de frente para trás), ignorando maiúsculas.

## Entradas

- Linha 1: palavra (sem espaços)

## Saídas

- Linha 1: `palindromo` ou `nao e palindromo`

## Exemplos

### Exemplo 1

**Entrada:**
```
arara
```

**Saída:**
```
palindromo
```

### Exemplo 2

**Entrada:**
```
casa
```

**Saída:**
```
nao e palindromo
```

## Restrições

- Comparação case-insensitive.

## Dicas

- Em Python, compare `s.lower()` com `s.lower()[::-1]`.
- Em C, compare o primeiro com o último, avançando para o centro.

## Erros comuns

- **Sensibilidade a maiúsculas:** converter para minúsculas antes de comparar.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
