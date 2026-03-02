# 02.04 — Decomposição de Valor em Notas/Moedas

Tema: Operadores Aritméticos / Dificuldade: Médio

## Enunciado

Dado um valor inteiro em reais, decompô-lo no número mínimo de notas e moedas: R$ 100, 50, 20, 10, 5, 2 e 1. Imprima apenas as denominações com quantidade maior que zero.

## Entradas

- Linha 1: inteiro (valor em reais, 1 a 10000)

## Saídas

- Para cada denominação com contagem > 0: `X nota(s)/moeda(s) de Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
173
```

**Saída:**
```
1 nota(s)/moeda(s) de 100
1 nota(s)/moeda(s) de 50
1 nota(s)/moeda(s) de 20
0 nota(s)/moeda(s) de 10
0 nota(s)/moeda(s) de 5
1 nota(s)/moeda(s) de 2
1 nota(s)/moeda(s) de 1
```

### Exemplo 2

**Entrada:**
```
7
```

**Saída:**
```
1 nota(s)/moeda(s) de 5
1 nota(s)/moeda(s) de 2
```

## Restrições

- Apenas imprimir denominações com quantidade > 0.
- Denominações: 100, 50, 20, 10, 5, 2, 1.

## Dicas

- Para cada denominação (da maior para a menor): `qtd = valor // denominacao; valor = valor % denominacao`.

## Erros comuns

- **Mostrar zeros:** só imprima quando a quantidade for maior que zero.
- **Ordem errada:** processe da maior denominação para a menor.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
