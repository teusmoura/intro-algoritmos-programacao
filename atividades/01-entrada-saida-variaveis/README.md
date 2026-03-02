# 01 — Entrada, Saída e Variáveis

## Enunciado

Leia o nome e a idade de uma pessoa e imprima uma mensagem de apresentação.

## Entradas

- Linha 1: nome da pessoa (string, sem espaços)
- Linha 2: idade da pessoa (inteiro positivo)

## Saídas

- Linha 1: `Ola, <nome>! Voce tem <idade> anos.`

## Exemplos

### Exemplo 1

**Entrada:**
```
Ana
20
```

**Saída:**
```
Ola, Ana! Voce tem 20 anos.
```

### Exemplo 2

**Entrada:**
```
Carlos
35
```

**Saída:**
```
Ola, Carlos! Voce tem 35 anos.
```

## Restrições

- Não utilize bibliotecas externas.
- O nome não contém espaços.
- A idade é um inteiro entre 1 e 120.

## Dicas

- Em Python, `input()` lê uma linha como string. Para converter para inteiro, use `int(input())`.
- Em C, use `scanf("%s", nome)` para ler uma palavra (sem espaços) e `scanf("%d", &idade)` para inteiro.
- Atenção ao formato exato da saída (maiúsculas, pontuação, acentuação removida).

## Erros comuns

- **Ler a idade como string:** lembre-se de converter para inteiro antes de usar em cálculos.
- **Espaço extra na saída:** verifique o formato com cuidado.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C — compilar e executar
gcc c/solucao.c -o solucao
./solucao
```

Para testar com arquivo de entrada:

```bash
python3 python/solucao.py < entrada.txt
./solucao < entrada.txt
```
