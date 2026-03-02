# 07.06 — Ler Inteiro em Intervalo

Tema: Funções / Dificuldade: Fácil

## Enunciado

Implemente a função `ler_inteiro_intervalo(minimo, maximo)` que lê inteiros da entrada até obter um no intervalo [minimo, maximo]. Leia o intervalo e os valores e imprima o válido.

## Entradas

- Linha 1: `minimo maximo` (dois inteiros na mesma linha)
- Linhas seguintes: inteiros até um estar no intervalo

## Saídas

- Linha 1: `Valido: X`

## Exemplos

### Exemplo 1

**Entrada:**
```
1 10
-5
0
15
7
```

**Saída:**
```
Valido: 7
```

## Restrições

- O laço continua até encontrar valor no intervalo.

## Dicas

- Em Python, use `while True` dentro da função.

## Erros comuns

- **Não validar o intervalo:** minimo pode ser maior que zero.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
