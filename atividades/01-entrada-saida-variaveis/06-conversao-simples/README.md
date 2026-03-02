# 01.06 — Conversão Simples

Tema: Entrada e Saída / Dificuldade: Fácil

## Enunciado

Leia um valor em metros e converta para centímetros e quilômetros. Em seguida, leia um valor em horas e converta para minutos e segundos.

## Entradas

- Linha 1: valor em metros (real)
- Linha 2: valor em horas (real)

## Saídas

- Linha 1: `X metros = Y cm = Z km`
- Linha 2: `X horas = Y minutos = Z segundos`

## Exemplos

### Exemplo 1

**Entrada:**
```
1500.0
2.5
```

**Saída:**
```
1500.0 metros = 150000.0 cm = 1.5 km
2.5 horas = 150.0 minutos = 9000.0 segundos
```

## Restrições

- Valores são positivos.
- Imprima os números com a precisão padrão de float (sem forçar casas decimais fixas).

## Dicas

- 1 metro = 100 cm = 0.001 km.
- 1 hora = 60 minutos = 3600 segundos.

## Erros comuns

- **Divisão inteira:** ao dividir metros por 1000, use 1000.0 em C.
- **Formato:** siga exatamente o padrão da saída.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
