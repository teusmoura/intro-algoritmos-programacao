# 07.04 — Funções de Conversão

Tema: Funções / Dificuldade: Fácil

## Enunciado

Implemente as funções `celsius_para_fahrenheit(c)` e `segundos_para_hhmmss(s)`. Leia uma temperatura em Celsius e um total de segundos; imprima as conversões.

## Entradas

- Linha 1: temperatura em Celsius (real)
- Linha 2: total de segundos (inteiro)

## Saídas

- Linha 1: `X.1f C = Y.1f F`
- Linha 2: `HH:MM:SS`

## Exemplos

### Exemplo 1

**Entrada:**
```
100.0
3723
```

**Saída:**
```
100.0 C = 212.0 F
01:02:03
```

## Restrições

- Implementar as duas funções explicitamente.

## Dicas

- F = C × 9/5 + 32.
- Horas = s // 3600; Minutos = (s % 3600) // 60; Segundos = s % 60.

## Erros comuns

- **Divisão inteira em C:** use 9.0/5.0 para conversão de temperatura.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
