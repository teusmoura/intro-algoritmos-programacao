# 03.06 — Tipo de Triângulo

Tema: Condicionais / Dificuldade: Médio

## Enunciado

Leia três lados e verifique se formam um triângulo válido. Se sim, classifique como equilátero, isósceles ou escaleno.

## Entradas

- Linha 1: lado `a` (real)
- Linha 2: lado `b` (real)
- Linha 3: lado `c` (real)

## Saídas

- `Nao forma triangulo` ou `equilatero` / `isosceles` / `escaleno`

## Exemplos

### Exemplo 1

**Entrada:**
```
3.0
3.0
3.0
```

**Saída:**
```
equilatero
```

### Exemplo 2

**Entrada:**
```
1.0
2.0
10.0
```

**Saída:**
```
Nao forma triangulo
```

## Restrições

- Triângulo válido: cada lado menor que a soma dos outros dois.
- Equilátero: todos iguais; Isósceles: dois iguais; Escaleno: todos diferentes.

## Dicas

- Valide: `a < b+c && b < a+c && c < a+b`.

## Erros comuns

- **Comparar floats com ==:** para este exercício, use `==` diretamente (valores exatos de entrada).

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
