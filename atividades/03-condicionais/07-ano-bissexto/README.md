# 03.07 — Ano Bissexto

Tema: Condicionais / Dificuldade: Fácil

## Enunciado

Leia um ano e informe se é bissexto ou não.

## Entradas

- Linha 1: inteiro (ano)

## Saídas

- Linha 1: `bissexto` ou `nao bissexto`

## Exemplos

### Exemplo 1

**Entrada:**
```
2000
```

**Saída:**
```
bissexto
```

### Exemplo 2

**Entrada:**
```
1900
```

**Saída:**
```
nao bissexto
```

### Exemplo 3

**Entrada:**
```
2024
```

**Saída:**
```
bissexto
```

## Restrições

- Bissexto: divisível por 4, exceto séculos (múltiplos de 100) que não sejam divisíveis por 400.

## Dicas

- Condição: `(ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0)`.

## Erros comuns

- **Esquecer a regra dos séculos:** 1900 não é bissexto, 2000 é.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
