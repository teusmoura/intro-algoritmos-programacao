# 03.03 — Classificação por Idade

Tema: Condicionais / Dificuldade: Fácil

## Enunciado

Leia a idade de uma pessoa e classifique-a conforme a faixa etária.

## Entradas

- Linha 1: inteiro (idade)

## Saídas

- Linha 1: `crianca`, `adolescente`, `adulto` ou `idoso`

## Exemplos

### Exemplo 1

**Entrada:**
```
10
```

**Saída:**
```
crianca
```

### Exemplo 2

**Entrada:**
```
65
```

**Saída:**
```
idoso
```

## Restrições

- 0–12: crianca
- 13–17: adolescente
- 18–59: adulto
- 60+: idoso

## Dicas

- Use `if/elif/else` em ordem crescente de faixa.

## Erros comuns

- **Limites errados:** atenção que 12 é crianca, 13 é adolescente, 17 é adolescente, 18 é adulto.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
