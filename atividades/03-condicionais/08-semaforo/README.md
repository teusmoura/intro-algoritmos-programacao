# 03.08 — Semáforo

Tema: Condicionais / Dificuldade: Fácil

## Enunciado

Leia a cor do semáforo (`R`, `Y` ou `G`) e imprima a ação correspondente.

## Entradas

- Linha 1: caractere `R`, `Y` ou `G`

## Saídas

- Linha 1: `Pare`, `Atencao` ou `Siga`

## Exemplos

### Exemplo 1

**Entrada:**
```
R
```

**Saída:**
```
Pare
```

### Exemplo 2

**Entrada:**
```
G
```

**Saída:**
```
Siga
```

## Restrições

- Entrada sempre será `R`, `Y` ou `G`.

## Dicas

- Use `if/elif/else` ou um dicionário em Python.

## Erros comuns

- **Case sensitivity:** a entrada pode ser maiúscula; trate conforme o enunciado.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
