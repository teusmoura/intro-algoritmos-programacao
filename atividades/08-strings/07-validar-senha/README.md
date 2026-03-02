# 08.07 — Validar Senha

Tema: Strings / Dificuldade: Fácil

## Enunciado

Leia uma senha e valide-a: mínimo de 8 caracteres e pelo menos um dígito. Imprima "Senha valida" ou "Senha invalida".

## Entradas

- Linha 1: senha (string sem espaços)

## Saídas

- Linha 1: `Senha valida` ou `Senha invalida`

## Exemplos

### Exemplo 1

**Entrada:**
```
abc12345
```

**Saída:**
```
Senha valida
```

### Exemplo 2

**Entrada:**
```
abcdefgh
```

**Saída:**
```
Senha invalida
```

## Restrições

- Mínimo 8 caracteres E pelo menos 1 dígito.

## Dicas

- Em Python, use `len(senha) >= 8` e `any(c.isdigit() for c in senha)`.

## Erros comuns

- **OR em vez de AND:** ambas as condições devem ser verdadeiras.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
