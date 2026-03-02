# 05.04 — Cofrinho

Tema: Laços e Acumuladores / Dificuldade: Médio

## Enunciado

Leia uma meta de economia e, em seguida, valores de moedas (0.05, 0.10, 0.25, 0.50 ou 1.00) até que o total acumulado atinja ou supere a meta. Imprima o total acumulado. Pode-se assumir que todas as entradas de moedas serão valores válidos.

## Entradas

- Linha 1: meta (real)
- Linhas seguintes: valores de moedas (um por linha), até atingir a meta

## Saídas

- Linha 1: `Total: R$ X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
1.00
0.25
0.25
0.50
```

**Saída:**
```
Total: R$ 1.00
```

## Restrições

- Moedas válidas: 0.05, 0.10, 0.25, 0.50, 1.00.
- Parar quando total >= meta.

## Dicas

- Use `while total < meta` para continuar lendo.

## Erros comuns

- **Comparação de floats:** ao usar `>=`, pode haver imprecisão; arredonde ao imprimir com `.2f`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
