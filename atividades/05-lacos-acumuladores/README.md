# 05 — Laços e Acumuladores

## Enunciado

Leia `n` números reais e calcule e imprima a **soma** e a **média** deles.

## Entradas

- Linha 1: inteiro positivo `n` (1 ≤ n ≤ 1000)
- Próximas `n` linhas: um número real por linha

## Saídas

- Linha 1: `Soma: <valor>` com 2 casas decimais
- Linha 2: `Media: <valor>` com 2 casas decimais

## Exemplos

### Exemplo 1

**Entrada:**
```
4
2.0
3.5
1.5
5.0
```

**Saída:**
```
Soma: 12.00
Media: 3.00
```

### Exemplo 2

**Entrada:**
```
3
10
20
30
```

**Saída:**
```
Soma: 60.00
Media: 20.00
```

## Restrições

- Use obrigatoriamente um laço para ler os valores.
- Não utilize bibliotecas extras (como `statistics` em Python ou `math.h` em C).
- 1 ≤ n ≤ 1000

## Dicas

- Inicialize o acumulador de soma em 0 **antes** do laço.
- A média é `soma / n`. Garanta que a divisão seja real (não inteira).
- Em C, declare as variáveis de soma e média como `double`.

## Erros comuns

- **Acumulador não inicializado:** em C, variáveis locais não inicializadas têm lixo de memória.
- **Divisão inteira em C:** se `soma` for `double` mas `n` for `int`, a divisão `soma / n` ainda
  é real em C — mas é bom confirmar com um cast explícito: `(double)soma / n`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
