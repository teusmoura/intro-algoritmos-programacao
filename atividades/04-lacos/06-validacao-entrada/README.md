# 04.06 — Validação de Entrada

Tema: Laços / Dificuldade: Fácil

## Enunciado

Leia inteiros até que o usuário digite um número no intervalo [1, 10]. Imprima o número válido.

## Entradas

- Uma ou mais linhas com inteiros; o programa para quando um valor está em [1, 10].

## Saídas

- Linha 1: `Valido: X`

## Exemplos

### Exemplo 1

**Entrada:**
```
-3
0
15
7
```

**Saída:**
```
Valido: 7
```

## Restrições

- Continuar lendo até encontrar valor válido.

## Dicas

- Use `while True` + `break` em Python.
- Em C, use `do { ... } while (n < 1 || n > 10)`.

## Erros comuns

- **Não repetir leitura:** o laço deve continuar até valor válido.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
