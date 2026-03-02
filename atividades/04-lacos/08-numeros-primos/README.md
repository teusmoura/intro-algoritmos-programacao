# 04.08 — Números Primos

Tema: Laços / Dificuldade: Médio

## Enunciado

Leia um inteiro `N` e imprima todos os números primos no intervalo [2, N], um por linha.

## Entradas

- Linha 1: inteiro `N` (N ≥ 2)

## Saídas

- Primos de 2 a N, um por linha

## Exemplos

### Exemplo 1

**Entrada:**
```
20
```

**Saída:**
```
2
3
5
7
11
13
17
19
```

## Restrições

- N ≥ 2.

## Dicas

- Para cada número `k`, verifique se é divisível por algum número de 2 a √k.

## Erros comuns

- **Incluir 1 como primo:** 1 não é primo.
- **Verificar apenas até k/2:** pode funcionar mas é ineficiente; use √k.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C (requer -lm para sqrt)
gcc c/solucao.c -o solucao -lm
./solucao
```
