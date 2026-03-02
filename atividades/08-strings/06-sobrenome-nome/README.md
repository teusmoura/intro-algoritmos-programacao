# 08.06 — Sobrenome, Nome

Tema: Strings / Dificuldade: Fácil

## Enunciado

Leia um nome no formato "Nome Sobrenome" e imprima no formato "SOBRENOME, Nome".

## Entradas

- Linha 1: "Nome Sobrenome" (duas palavras separadas por espaço)

## Saídas

- Linha 1: "SOBRENOME, Nome"

## Exemplos

### Exemplo 1

**Entrada:**
```
Ana Silva
```

**Saída:**
```
SILVA, Ana
```

## Restrições

- Exatamente duas palavras.

## Dicas

- Em Python, use `split()` e `upper()`.
- Em C, use `sscanf` ou `scanf` para ler duas palavras.

## Erros comuns

- **Converter tudo para maiúsculas:** apenas o sobrenome deve estar em maiúsculas.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
