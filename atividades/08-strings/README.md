# 08 — Strings Básico

## Enunciado

Leia uma palavra (string sem espaços) e imprima:

1. O comprimento (número de caracteres) da palavra.
2. A palavra em letras **maiúsculas**.
3. A palavra ao **contrário** (invertida).

## Entradas

- Linha 1: uma palavra sem espaços (somente letras, comprimento entre 1 e 100)

## Saídas

- Linha 1: comprimento da palavra
- Linha 2: palavra em maiúsculas
- Linha 3: palavra invertida

## Exemplos

### Exemplo 1

**Entrada:**
```
python
```

**Saída:**
```
6
PYTHON
nohtyp
```

### Exemplo 2

**Entrada:**
```
abc
```

**Saída:**
```
3
ABC
cba
```

## Restrições

- A palavra contém apenas letras (sem dígitos, espaços ou símbolos especiais).
- Comprimento entre 1 e 100 caracteres.

## Dicas

- Em Python: `len(s)` retorna o comprimento, `s.upper()` converte para maiúsculas, `s[::-1]` inverte.
- Em C: `strlen()` de `<string.h>` retorna o comprimento. Para maiúsculas, use `toupper()` de `<ctype.h>`.
  Para inverter, percorra o array de trás para frente.

## Erros comuns

- **Não incluir `<string.h>` em C:** `strlen` requer esse cabeçalho.
- **Confundir índice com comprimento:** em C, `s[len]` é o caractere nulo `'\0'`, não o último caractere.
- **Tentar modificar o literal de string em C:** sempre leia a string para um array `char s[101]`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
