# 05.05 — Produção Total

Tema: Laços e Acumuladores / Dificuldade: Fácil

## Enunciado

Leia a produção diária de 7 dias (inteiros) e imprima o total e o número do dia com maior produção (1-indexado).

## Entradas

- 7 linhas: produção de cada dia (inteiros)

## Saídas

- Linha 1: `Total: X`
- Linha 2: `Pico no dia Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
10
20
15
30
25
18
12
```

**Saída:**
```
Total: 130
Pico no dia 4
```

## Restrições

- Exatamente 7 leituras.
- Se houver empate, retorne o primeiro dia com maior produção.

## Dicas

- Mantenha controle do dia atual (1 a 7) e compare com o máximo.

## Erros comuns

- **Dia com 0-index:** o enunciado pede 1-indexado.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
