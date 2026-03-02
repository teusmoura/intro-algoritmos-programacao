# 07.05 — Função Média

Tema: Funções / Dificuldade: Fácil

## Enunciado

Implemente uma função `media(valores)` que recebe uma coleção de floats e retorna a média. Leia N floats e imprima a média com 2 casas decimais.

## Entradas

- Linha 1: N (quantidade)
- Linhas 2 a N+1: N floats

## Saídas

- Linha 1: `Media: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
4
5.0
7.5
3.0
8.5
```

**Saída:**
```
Media: 6.00
```

## Restrições

- N ≥ 1.

## Dicas

- Em C, passe o array e o tamanho para a função.

## Erros comuns

- **Divisão inteira:** garantir que a soma seja float.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
