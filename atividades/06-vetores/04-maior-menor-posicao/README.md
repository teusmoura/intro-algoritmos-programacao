# 06.04 — Maior e Menor com Posição

Tema: Vetores / Dificuldade: Fácil

## Enunciado

Leia N inteiros e encontre o maior e o menor, informando também suas posições (base 0).

## Entradas

- Linha 1: N
- Linhas 2 a N+1: N inteiros

## Saídas

- Linha 1: `Maior: X na posicao Y`
- Linha 2: `Menor: X na posicao Y`

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
Maior: 9 na posicao 3
Menor: 1 na posicao 2
```

## Restrições

- Em caso de empate, retorne a primeira ocorrência.

## Dicas

- Inicialize `maior` e `menor` com o primeiro elemento e rastreie o índice.

## Erros comuns

- **Não rastrear o índice:** armazene o índice junto com o valor.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
