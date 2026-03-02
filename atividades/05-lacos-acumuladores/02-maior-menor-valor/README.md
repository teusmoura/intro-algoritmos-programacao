# 05.02 — Maior e Menor Valor

Tema: Laços e Acumuladores / Dificuldade: Fácil

## Enunciado

Leia N inteiros e imprima o maior e o menor.

## Entradas

- Linha 1: inteiro N (quantidade)
- Linhas 2 a N+1: N inteiros, um por linha

## Saídas

- Linha 1: `Maior: X`
- Linha 2: `Menor: Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
5
3
7
1
9
4
```

**Saída:**
```
Maior: 9
Menor: 1
```

## Restrições

- N ≥ 1.

## Dicas

- Inicialize `maior` e `menor` com o primeiro valor lido.

## Erros comuns

- **Inicializar com 0:** pode falhar se todos os valores forem negativos.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
