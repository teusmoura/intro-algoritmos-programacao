# 01.05 — Troca de Valores

Tema: Entrada e Saída / Dificuldade: Fácil

## Enunciado

Leia dois inteiros `a` e `b`. Troque os valores usando uma variável auxiliar e imprima os valores após a troca.

## Entradas

- Linha 1: inteiro `a`
- Linha 2: inteiro `b`

## Saídas

- Linha 1: `a = X` (valor original de `b`)
- Linha 2: `b = Y` (valor original de `a`)

## Exemplos

### Exemplo 1

**Entrada:**
```
10
20
```

**Saída:**
```
a = 20
b = 10
```

### Exemplo 2

**Entrada:**
```
-5
3
```

**Saída:**
```
a = 3
b = -5
```

## Restrições

- Use uma variável auxiliar para a troca (não use a troca simultânea do Python em produção).
- Valores podem ser negativos.

## Dicas

- Use `aux = a; a = b; b = aux;` em C.
- Em Python, demonstre também o uso de variável auxiliar explícita.

## Erros comuns

- **Não usar variável auxiliar:** o enunciado pede explicitamente.
- **Formato errado:** verifique `a = X` e `b = Y`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
