# 01.04 — Área e Perímetro

Tema: Entrada e Saída / Dificuldade: Fácil

## Enunciado

Leia o comprimento e a largura de um retângulo, depois o raio de um círculo. Calcule e imprima a área e o perímetro de cada figura. Use π = 3.14159.

## Entradas

- Linha 1: comprimento do retângulo (real)
- Linha 2: largura do retângulo (real)
- Linha 3: raio do círculo (real)

## Saídas

- Linha 1: `Area retangulo: X.XX`
- Linha 2: `Perimetro retangulo: X.XX`
- Linha 3: `Area circulo: X.XX`
- Linha 4: `Perimetro circulo: X.XX`

## Exemplos

### Exemplo 1

**Entrada:**
```
5.0
3.0
4.0
```

**Saída:**
```
Area retangulo: 15.00
Perimetro retangulo: 16.00
Area circulo: 50.27
Perimetro circulo: 25.13
```

## Restrições

- Use π = 3.14159.
- Todos os valores são positivos.
- Imprimir com 2 casas decimais.

## Dicas

- Área do retângulo = comprimento × largura.
- Perímetro do retângulo = 2 × (comprimento + largura).
- Área do círculo = π × r².
- Perímetro (circunferência) do círculo = 2 × π × r.

## Erros comuns

- **Usar π errado:** use exatamente 3.14159.
- **Casas decimais:** use `.2f`.

## Como rodar

```bash
# Python
python3 python/solucao.py

# C
gcc c/solucao.c -o solucao
./solucao
```
