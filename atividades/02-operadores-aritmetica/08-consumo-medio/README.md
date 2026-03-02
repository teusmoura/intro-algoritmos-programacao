# 02.08 — Consumo Médio de Combustível

Tema: Operadores Aritméticos / Dificuldade: Fácil

## Enunciado

Leia a distância percorrida (km) e a quantidade de combustível gasto (litros) e calcule o consumo médio em km/l.

## Entradas

- Linha 1: distância em km (real)
- Linha 2: combustível em litros (real)

## Saídas

- Linha 1: `Consumo: X.XX km/l`

## Exemplos

### Exemplo 1

**Entrada:**
```
500.0
40.0
```

**Saída:**
```
Consumo: 12.50 km/l
```

## Restrições

- Distância e combustível positivos.
- Imprimir com 2 casas decimais.

## Dicas

- Consumo = distância / combustível.

## Erros comuns

- **Formato:** não esquecer `km/l` no final.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
