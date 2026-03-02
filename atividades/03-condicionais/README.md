# 03 — Condicionais

## Enunciado

Leia um número inteiro e informe se ele é **positivo**, **negativo** ou **zero**.

## Entradas

- Linha 1: um número inteiro `n`

## Saídas

- Linha 1: `positivo`, `negativo` ou `zero` (conforme o valor de `n`)

## Exemplos

### Exemplo 1

**Entrada:**
```
7
```

**Saída:**
```
positivo
```

### Exemplo 2

**Entrada:**
```
-3
```

**Saída:**
```
negativo
```

### Exemplo 3

**Entrada:**
```
0
```

**Saída:**
```
zero
```

## Restrições

- Não utilize bibliotecas externas.
- A saída deve ser exatamente uma das três palavras (minúsculas).

## Dicas

- Use `if`, `elif` (Python) / `else if` (C) e `else` para cobrir os três casos.
- Verifique primeiro se é zero, depois positivo, depois negativo — ou em qualquer ordem lógica.
- Em Python, `n > 0` retorna `True` ou `False` diretamente.

## Erros comuns

- **Esquecer o caso zero:** o zero não é nem positivo nem negativo; precisa de um caso separado.
- **Saída com letra maiúscula:** verifique que imprime exatamente `positivo`, `negativo` ou `zero`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
