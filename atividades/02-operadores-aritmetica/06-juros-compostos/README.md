# 02.06 — Juros Compostos

Tema: Operadores Aritméticos / Dificuldade: Médio

## Enunciado

Leia o capital, a taxa de juros (%) e o tempo (anos). Calcule e imprima o montante e os juros usando juros compostos.

## Entradas

- Linha 1: capital (real)
- Linha 2: taxa (real, %)
- Linha 3: tempo (real, anos)

## Saídas

- Linha 1: `Montante: X.XX`
- Linha 2: `Juros: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
1000.00
10.0
2.0
```

**Saída:**
```
Montante: 1210.00
Juros: 210.00
```

## Restrições

- M = C × (1 + r/100)^t
- J = M − C

## Dicas

- Em Python, use `**` para potenciação.
- Em C, inclua `<math.h>` e use `pow()`. Compile com `-lm`.

## Erros comuns

- **Não usar math.h em C:** `pow` requer `#include <math.h>`.
- **Dividir taxa por 100:** a taxa é percentual.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C (requer -lm para math.h)
gcc c/solucao.c -o solucao -lm
./solucao
```
