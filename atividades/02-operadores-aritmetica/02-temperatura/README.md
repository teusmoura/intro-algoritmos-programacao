# 02.02 — Conversão de Temperatura

Tema: Operadores Aritméticos / Dificuldade: Fácil

## Enunciado

Leia uma temperatura em Celsius e converta para Fahrenheit. Em seguida, leia uma temperatura em Fahrenheit e converta para Celsius.

## Entradas

- Linha 1: temperatura em Celsius (real)
- Linha 2: temperatura em Fahrenheit (real)

## Saídas

- Linha 1: `X.1f C = Y.1f F`
- Linha 2: `X.1f F = Y.1f C`

## Exemplos

### Exemplo 1

**Entrada:**
```
100.0
32.0
```

**Saída:**
```
100.0 C = 212.0 F
32.0 F = 0.0 C
```

## Restrições

- Imprimir com 1 casa decimal.
- F = C × 9/5 + 32
- C = (F − 32) × 5/9

## Dicas

- Atenção à precedência: em C, `9/5` é divisão inteira; use `9.0/5.0`.
- Em Python, divisão `/` já é real.

## Erros comuns

- **Divisão inteira em C:** use `9.0/5.0` ou `(double)9/5`.
- **Formato errado:** use `:.1f` ou `%.1f`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
