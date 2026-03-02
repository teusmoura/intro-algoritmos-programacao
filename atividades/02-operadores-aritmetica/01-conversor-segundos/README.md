# 02.01 — Conversor de Segundos

Tema: Operadores Aritméticos / Dificuldade: Fácil

## Enunciado

Leia um total de segundos (inteiro) e converta para o formato `HH:MM:SS` com zero à esquerda.

## Entradas

- Linha 1: inteiro (total de segundos, 0 a 359999)

## Saídas

- Linha 1: tempo no formato `HH:MM:SS`

## Exemplos

### Exemplo 1

**Entrada:**
```
3723
```

**Saída:**
```
01:02:03
```

### Exemplo 2

**Entrada:**
```
86399
```

**Saída:**
```
23:59:59
```

## Restrições

- 0 ≤ segundos ≤ 359999.
- Use divisão inteira e módulo.

## Dicas

- Horas = segundos // 3600
- Minutos restantes = (segundos % 3600) // 60
- Segundos restantes = segundos % 60
- Em Python, use `f"{h:02d}:{m:02d}:{s:02d}"` para zero-padding.
- Em C, use `%02d`.

## Erros comuns

- **Não usar zero-padding:** `1:2:3` em vez de `01:02:03`.
- **Ordem errada:** calcule horas primeiro, depois minutos, depois segundos.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
