# 02.05 — Juros Simples

Tema: Operadores Aritméticos / Dificuldade: Fácil

## Enunciado

Leia o capital, a taxa de juros (%) e o tempo (anos). Calcule e imprima os juros simples e o montante final.

## Entradas

- Linha 1: capital (real)
- Linha 2: taxa (real, %)
- Linha 3: tempo (real, anos)

## Saídas

- Linha 1: `Juros: X.XX`
- Linha 2: `Montante: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
1000.00
5.0
2.0
```

**Saída:**
```
Juros: 100.00
Montante: 1100.00
```

## Restrições

- J = C × r × t / 100
- M = C + J

## Dicas

- Lembre de dividir a taxa por 100 (está em porcentagem).

## Erros comuns

- **Esquecer de dividir por 100:** a taxa é percentual.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
