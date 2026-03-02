# 04 — Laços

## Enunciado

Leia um inteiro positivo `n` e imprima todos os números de 1 até `n`, um por linha.

## Entradas

- Linha 1: inteiro positivo `n` (1 ≤ n ≤ 1000)

## Saídas

- `n` linhas, cada uma com um número de 1 a `n`

## Exemplos

### Exemplo 1

**Entrada:**
```
5
```

**Saída:**
```
1
2
3
4
5
```

### Exemplo 2

**Entrada:**
```
3
```

**Saída:**
```
1
2
3
```

## Restrições

- Use obrigatoriamente um laço (`for` ou `while`).
- Não utilize bibliotecas externas.
- 1 ≤ n ≤ 1000

## Dicas

- Em Python, `range(1, n+1)` gera os valores de 1 até n (inclusive).
- Em C, um laço `for (i = 1; i <= n; i++)` percorre os valores de 1 a n.
- Cuidado com o limite superior: `range(1, n)` em Python **não** inclui `n`.

## Erros comuns

- **Off-by-one (erro de limite):** usar `range(n)` em Python gera de 0 a n-1, não de 1 a n.
- **Laço infinito em C:** esquecer de incrementar o contador (`i++`).

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
