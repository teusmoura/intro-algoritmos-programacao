# 07.02 — É Primo?

Tema: Funções / Dificuldade: Médio

## Enunciado

Implemente uma função `eh_primo(n)` que retorna verdadeiro se n é primo. Use-a para listar todos os primos no intervalo [2, N] e mostrar o total.

## Entradas

- Linha 1: inteiro N (N ≥ 2)

## Saídas

- Primos de 2 a N, um por linha
- Linha final: `Total: X primos`

## Exemplos

### Exemplo 1

**Entrada:**
```
20
```

**Saída:**
```
2
3
5
7
11
13
17
19
Total: 8 primos
```

## Restrições

- Implementar a função explicitamente (não usar biblioteca de primos).
- Verificar divisores até √n.

## Dicas

- Em Python, defina `def eh_primo(n):`.
- Em C, declare `int eh_primo(int n)` antes do `main`.

## Erros comuns

- **Considerar 1 como primo:** 1 não é primo.
- **Esquecer -lm:** use `sqrt` do `<math.h>`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C (requer -lm)
gcc c/solucao.c -o solucao -lm
./solucao
```
