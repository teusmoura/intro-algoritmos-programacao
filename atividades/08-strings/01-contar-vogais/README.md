# 08.01 — Contar Vogais, Consoantes e Espaços

Tema: Strings / Dificuldade: Fácil

## Enunciado

Leia uma linha de texto e conte separadamente as vogais, as consoantes e os espaços.

## Entradas

- Linha 1: texto (pode conter espaços e letras)

## Saídas

- Linha 1: `Vogais: X`
- Linha 2: `Consoantes: Y`
- Linha 3: `Espacos: Z`

## Exemplos

### Exemplo 1

**Entrada:**
```
Ola mundo
```

**Saída:**
```
Vogais: 4
Consoantes: 4
Espacos: 1
```

## Restrições

- Considerar apenas letras (vogais/consoantes) e espaços.
- Dígitos e outros caracteres não são contados em nenhuma categoria.

## Dicas

- Converta para minúsculas para verificação unificada.
- Consoante = letra que não é vogal.

## Erros comuns

- **Contar dígitos como consoantes:** verifique se o caractere é letra antes.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
