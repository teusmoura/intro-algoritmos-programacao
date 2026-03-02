# 07.07 — Menu de Operações

Tema: Funções / Dificuldade: Médio

## Enunciado

Implemente funções para as quatro operações básicas. Leia a operação (1=+, 2=−, 3=×, 4=÷) e dois números e imprima o resultado.

## Entradas

- Linha 1: operação (1–4)
- Linha 2: número `a` (real)
- Linha 3: número `b` (real)

## Saídas

- Linha 1: `Resultado: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
3
4.0
5.0
```

**Saída:**
```
Resultado: 20.00
```

### Exemplo 2

**Entrada:**
```
4
10.0
4.0
```

**Saída:**
```
Resultado: 2.50
```

## Restrições

- Operação sempre válida (1–4).
- Divisão: b ≠ 0 (garantido pela entrada).

## Dicas

- Defina uma função para cada operação e chame conforme o número.

## Erros comuns

- **Divisão inteira:** use divisão real.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
