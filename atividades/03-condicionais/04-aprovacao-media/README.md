# 03.04 — Aprovação por Média

Tema: Condicionais / Dificuldade: Fácil

## Enunciado

Leia 4 notas (reais entre 0 e 10), calcule a média e informe o resultado do aluno.

## Entradas

- Linhas 1–4: notas (reais, uma por linha)

## Saídas

- Linha 1: `Media: X.X`
- Linha 2: `Reprovado`, `Recuperacao` ou `Aprovado`

## Exemplos

### Exemplo 1

**Entrada:**
```
7.0
8.0
6.0
9.0
```

**Saída:**
```
Media: 7.5
Aprovado
```

### Exemplo 2

**Entrada:**
```
4.0
3.0
5.0
4.0
```

**Saída:**
```
Media: 4.0
Reprovado
```

## Restrições

- média < 5: Reprovado
- 5 ≤ média < 7: Recuperacao
- média ≥ 7: Aprovado

## Dicas

- Use `:.1f` para formatar a média com 1 casa decimal.

## Erros comuns

- **Limites:** atenção especial ao `>=5` e `<7`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
