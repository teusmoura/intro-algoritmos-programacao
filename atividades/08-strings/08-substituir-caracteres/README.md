# 08.08 — Substituir Caracteres

Tema: Strings / Dificuldade: Fácil

## Enunciado

Leia uma linha de texto e substitua todas as ocorrências de `a` por `@` e de `e` por `3`. Imprima o resultado.

## Entradas

- Linha 1: texto

## Saídas

- Linha 1: texto com as substituições

## Exemplos

### Exemplo 1

**Entrada:**
```
abacate
```

**Saída:**
```
@b@c@t3
```

### Exemplo 2

**Entrada:**
```
Hello World
```

**Saída:**
```
H3llo World
```

## Restrições

- Substituir apenas `a` (minúsculo) por `@` e `e` (minúsculo) por `3`.

## Dicas

- Em Python, use `s.replace('a', '@').replace('e', '3')`.

## Erros comuns

- **Substituir maiúsculas:** somente minúsculas conforme o enunciado.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
