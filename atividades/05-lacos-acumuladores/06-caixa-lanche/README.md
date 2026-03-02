# 05.06 — Caixa de Lanche

Tema: Laços e Acumuladores / Dificuldade: Médio

## Enunciado

Um quiosque vende três itens:

| Item | Descrição | Preço   |
|------|-----------|---------|
| 1    | Salgado   | R$ 3,50 |
| 2    | Suco      | R$ 5,00 |
| 3    | Combo     | R$ 8,00 |

Leia pares (item, quantidade) até que o item seja 0. Imprima o total.

## Entradas

- Pares de linhas: item (1-3 ou 0) e quantidade; termina quando item = 0

## Saídas

- Linha 1: `Total: R$ X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
1
3
2
2
0
```

**Saída:**
```
Total: R$ 20.50
```

## Restrições

- item = 0 encerra a leitura (quantidade não é lida quando item = 0).

## Dicas

- Use um dicionário/array de preços para mapear item → preço.

## Erros comuns

- **Ler quantidade mesmo quando item=0:** verifique item antes de ler quantidade.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
