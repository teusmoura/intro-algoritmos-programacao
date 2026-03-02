# 04.02 — Somatório

Tema: Laços / Dificuldade: Fácil

## Enunciado

Leia um inteiro `N` e imprima a soma 1 + 2 + ... + N.

## Entradas

- Linha 1: inteiro `N` (N ≥ 1)

## Saídas

- Linha 1: soma total

## Exemplos

### Exemplo 1

**Entrada:**
```
10
```

**Saída:**
```
55
```

## Restrições

- N ≥ 1.

## Dicas

- Acumule a soma em uma variável iniciada em 0.
- Fórmula direta: N × (N+1) / 2.

## Erros comuns

- **Iniciar acumulador com 1:** pode gerar resultado errado; inicie com 0.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
