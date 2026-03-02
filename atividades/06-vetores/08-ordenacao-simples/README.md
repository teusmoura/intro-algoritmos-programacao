# 06.08 — Ordenação Simples (Bubble Sort)

Tema: Vetores / Dificuldade: Médio

## Enunciado

Leia N inteiros, ordene usando Bubble Sort e imprima o vetor ordenado.

## Entradas

- Linha 1: N
- Linhas 2 a N+1: N inteiros

## Saídas

- N inteiros em ordem crescente, um por linha

## Exemplos

### Exemplo 1

**Entrada:**
```
5
5
3
8
1
4
```

**Saída:**
```
1
3
4
5
8
```

## Restrições

- Implemente o Bubble Sort (não use funções de ordenação embutidas).

## Dicas

- Bubble Sort: percorra N-1 vezes, trocando pares adjacentes fora de ordem.

## Erros comuns

- **Usar sorted() em Python:** o enunciado pede implementação manual.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
