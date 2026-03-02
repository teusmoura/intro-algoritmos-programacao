# 06.01 — Lista de Presença

Tema: Vetores / Dificuldade: Fácil

## Enunciado

Leia N nomes (sem espaços) e imprima a lista de presença numerada na ordem de chegada.

## Entradas

- Linha 1: N (quantidade)
- Linhas 2 a N+1: nomes (uma palavra por linha)

## Saídas

- Linha 1: `Lista de presenca:`
- Linhas 2 a N+1: `1. Nome`, `2. Nome`, ...

## Exemplos

### Exemplo 1

**Entrada:**
```
3
Ana
Carlos
Maria
```

**Saída:**
```
Lista de presenca:
1. Ana
2. Carlos
3. Maria
```

## Restrições

- Nomes sem espaços.
- N ≥ 1.

## Dicas

- Armazene os nomes em uma lista/array e imprima numerados.

## Erros comuns

- **Index errado:** a numeração começa em 1, não 0.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
