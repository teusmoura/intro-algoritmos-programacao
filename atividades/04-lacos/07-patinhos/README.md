# 04.07 — Patinhos

Tema: Laços / Dificuldade: Fácil

## Enunciado

Leia N e imprima a música dos patinhos de forma simplificada: para cada i de N até 1, imprima uma linha com i patinhos e quantos voltaram (i-1). Ao final, imprima a linha final.

## Entradas

- Linha 1: inteiro `N` (1 ≤ N ≤ 10)

## Saídas

- N linhas: `i patinho(s) foi(foram) passear, somente i-1 voltou(voltaram)`
- Linha final: `Nenhum patinho voltou para casa`

## Exemplos

### Exemplo 1

**Entrada:**
```
3
```

**Saída:**
```
3 patinho(s) foi(foram) passear, somente 2 voltou(voltaram)
2 patinho(s) foi(foram) passear, somente 1 voltou(voltaram)
1 patinho(s) foi(foram) passear, somente 0 voltou(voltaram)
Nenhum patinho voltou para casa
```

## Restrições

- 1 ≤ N ≤ 10.

## Dicas

- Use `range(n, 0, -1)` em Python.

## Erros comuns

- **Não incluir a linha final:** sempre imprimir ao terminar o laço.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
