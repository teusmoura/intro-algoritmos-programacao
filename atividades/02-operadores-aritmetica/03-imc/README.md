# 02.03 — IMC

Tema: Operadores Aritméticos / Dificuldade: Fácil

## Enunciado

Leia o peso (kg) e a altura (m) de uma pessoa e calcule o IMC (Índice de Massa Corporal) com 2 casas decimais.

## Entradas

- Linha 1: peso em kg (real)
- Linha 2: altura em m (real)

## Saídas

- Linha 1: `IMC: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
70.0
1.75
```

**Saída:**
```
IMC: 22.86
```

## Restrições

- Peso e altura positivos.
- IMC = peso / (altura²).
- Imprimir com 2 casas decimais.

## Dicas

- IMC = peso / (altura * altura).

## Erros comuns

- **Elevar incorretamente:** use `altura ** 2` em Python ou `altura * altura` em C.
- **Casas decimais:** use `.2f`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
