# 05.08 — Sentinela

Tema: Laços e Acumuladores / Dificuldade: Fácil

## Enunciado

Leia inteiros até que o usuário entre com 0. Imprima a soma e a quantidade de valores lidos (excluindo o 0).

## Entradas

- Inteiros, um por linha, até 0 (sentinela)

## Saídas

- Linha 1: `Soma: X`
- Linha 2: `Quantidade: Y`

## Exemplos

### Exemplo 1

**Entrada:**
```
4
7
-2
0
```

**Saída:**
```
Soma: 9
Quantidade: 3
```

## Restrições

- O 0 é sentinela e não é contado.
- Pode não haver valores antes do 0 (quantidade = 0, soma = 0).

## Dicas

- Use `while True` + `break` em Python.

## Erros comuns

- **Incluir o 0 na soma:** o 0 é apenas o sinal de parada.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
