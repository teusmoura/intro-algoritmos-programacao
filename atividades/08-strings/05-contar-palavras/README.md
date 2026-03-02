# 08.05 — Contar Palavras

Tema: Strings / Dificuldade: Fácil

## Enunciado

Leia uma linha de texto e conte o número de palavras (separadas por espaços).

## Entradas

- Linha 1: texto

## Saídas

- Linha 1: `Palavras: X`

## Exemplos

### Exemplo 1

**Entrada:**
```
Ola mundo como vai
```

**Saída:**
```
Palavras: 4
```

### Exemplo 2

**Entrada:**
```
uma
```

**Saída:**
```
Palavras: 1
```

## Restrições

- Palavras separadas por espaço simples.
- Sem espaços duplos ou no início/fim.

## Dicas

- Em Python, `len(texto.split())` conta as palavras.
- Em C, percorra contando transições espaço→não-espaço.

## Erros comuns

- **Contar espaços em vez de palavras:** conte as transições.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
