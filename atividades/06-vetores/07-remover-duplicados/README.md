# 06.07 — Remover Duplicados

Tema: Vetores / Dificuldade: Médio

## Enunciado

Leia N inteiros e imprima a lista sem duplicatas, mantendo a ordem de primeira ocorrência.

## Entradas

- Linha 1: N
- Linhas 2 a N+1: N inteiros

## Saídas

- Únicos, um por linha, na ordem de primeira aparição

## Exemplos

### Exemplo 1

**Entrada:**
```
7
3
1
4
1
5
9
3
```

**Saída:**
```
3
1
4
5
9
```

## Restrições

- N ≥ 1.
- Manter ordem de primeira ocorrência.

## Dicas

- Em Python, use um `set` para rastrear vistos.
- Em C, verifique se o elemento já foi visto antes de adicionar.

## Erros comuns

- **Alterar ordem:** não ordene a saída.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
