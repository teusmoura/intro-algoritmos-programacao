# 06.05 — Média e Acima da Média

Tema: Vetores / Dificuldade: Fácil

## Enunciado

Leia N reais, calcule a média e conte quantos valores estão acima da média.

## Entradas

- Linha 1: N
- Linhas 2 a N+1: N reais

## Saídas

- Linha 1: `Media: X.XX`
- Linha 2: `Acima da media: Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
5
4.0
7.0
3.0
8.0
5.0
```

**Saída:**
```
Media: 5.40
Acima da media: 2
```

## Restrições

- N ≥ 1.

## Dicas

- É preciso guardar todos os valores (ou calcular a média primeiro e depois iterar novamente).

## Erros comuns

- **Contar ≥ em vez de >:** apenas valores estritamente acima.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
