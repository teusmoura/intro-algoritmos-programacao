# 02.07 — Distância entre Dois Pontos

Tema: Operadores Aritméticos / Dificuldade: Médio

## Enunciado

Leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância euclidiana entre eles.

## Entradas

- Linha 1: x1 (real)
- Linha 2: y1 (real)
- Linha 3: x2 (real)
- Linha 4: y2 (real)

## Saídas

- Linha 1: `Distancia: X.XXXX`

## Exemplos

### Exemplo 1

**Entrada:**
```
0.0
0.0
3.0
4.0
```

**Saída:**
```
Distancia: 5.0000
```

## Restrições

- d = √((x2−x1)² + (y2−y1)²)
- Imprimir com 4 casas decimais.

## Dicas

- Em Python, use `math.sqrt` ou `** 0.5`.
- Em C, use `sqrt` de `<math.h>`. Compile com `-lm`.

## Erros comuns

- **Não importar math em Python:** `import math`.
- **Esquecer -lm em C:** necessário para funções matemáticas.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C (requer -lm)
gcc c/solucao.c -o solucao -lm
./solucao
```
