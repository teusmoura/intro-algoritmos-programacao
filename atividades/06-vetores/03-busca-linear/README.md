# 06.03 — Busca Linear

Tema: Vetores / Dificuldade: Fácil

## Enunciado

Leia N inteiros e um valor-alvo. Encontre o índice (base 0) da primeira ocorrência do alvo, ou -1 se não encontrado.

## Entradas

- Linha 1: N
- Linhas 2 a N+1: N inteiros
- Linha N+2: valor-alvo

## Saídas

- Linha 1: `Indice: X` ou `Nao encontrado`

## Exemplos

### Exemplo 1

**Entrada:**
```
5
10
20
30
40
50
30
```

**Saída:**
```
Indice: 2
```

### Exemplo 2

**Entrada:**
```
3
1
2
3
7
```

**Saída:**
```
Nao encontrado
```

## Restrições

- N ≥ 1.
- Retornar a primeira ocorrência (menor índice).

## Dicas

- Percorra o vetor e compare cada elemento com o alvo.

## Erros comuns

- **Imprimir todos os índices:** retorne apenas o primeiro.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
