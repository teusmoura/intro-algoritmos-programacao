# 06.06 — Frequência de Notas

Tema: Vetores / Dificuldade: Fácil

## Enunciado

Leia N notas inteiras (0–10) e imprima um histograma: para cada nota de 0 a 10, quantos alunos obtiveram aquela nota.

## Entradas

- Linha 1: N
- Linhas 2 a N+1: N inteiros (0–10)

## Saídas

- 11 linhas: `Nota i: X` para i de 0 a 10

## Exemplos

### Exemplo 1

**Entrada:**
```
5
7
8
7
10
5
```

**Saída:**
```
Nota 0: 0
Nota 1: 0
Nota 2: 0
Nota 3: 0
Nota 4: 0
Nota 5: 1
Nota 6: 0
Nota 7: 2
Nota 8: 1
Nota 9: 0
Nota 10: 1
```

## Restrições

- Imprimir todos de 0 a 10, mesmo com contagem 0.

## Dicas

- Use um array de 11 posições para as contagens.

## Erros comuns

- **Não inicializar contadores com zero.**

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
