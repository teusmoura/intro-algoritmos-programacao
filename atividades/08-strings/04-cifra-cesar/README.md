# 08.04 — Cifra de César

Tema: Strings / Dificuldade: Médio

## Enunciado

Leia um texto e um deslocamento (1–25). Aplique a Cifra de César: desloque cada letra pelo valor informado, preservando maiúsculas/minúsculas. Caracteres não-letras permanecem inalterados.

## Entradas

- Linha 1: texto
- Linha 2: deslocamento (inteiro 1–25)

## Saídas

- Linha 1: texto cifrado

## Exemplos

### Exemplo 1

**Entrada:**
```
Hello, World!
3
```

**Saída:**
```
Khoor, Zruog!
```

## Restrições

- Letras circulam: Z + 1 = A.
- Não-letras são copiados sem alteração.

## Dicas

- `ord('A')` = 65, `ord('a')` = 97.
- Para letra maiúscula: `chr((ord(c) - 65 + deslocamento) % 26 + 65)`.

## Erros comuns

- **Não circular:** após 'Z' deve vir 'A'.
- **Alterar não-letras:** espaços, dígitos etc. devem permanecer iguais.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
