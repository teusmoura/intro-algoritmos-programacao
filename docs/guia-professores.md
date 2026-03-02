# Guia para Professores

Este guia é destinado a professores que desejam **utilizar, adaptar ou avaliar** as atividades
deste repositório em suas disciplinas de Algoritmos / Programação 1 / Introdução à Programação.

---

## Como usar o repositório em aula

1. **Clone ou faça um fork** do repositório para ter sua própria cópia adaptável.
2. Apresente o enunciado de cada atividade (`atividades/XX-nome/README.md`) aos alunos.
3. Peça que os alunos tentem resolver **antes** de consultar a solução.
4. Use as soluções em `python/solucao.py` e `c/solucao.c` como gabarito ou referência didática.

---

## Como adaptar as atividades

- **Modificar o enunciado:** edite o `README.md` da atividade. A licença CC BY 4.0 permite
  adaptações, desde que você dê crédito ao repositório original.
- **Adicionar restrições:** ex. "implemente sem usar `len()`" ou "use apenas laço `while`".
- **Criar variações:** use o template em `templates/atividade/README.md` para novas atividades.
- **Remover a solução:** distribua apenas o `README.md` sem a pasta `python/` ou `c/`.

---

## Sequência pedagógica sugerida

| Semana | Atividade | Conceito |
|--------|-----------|----------|
| 1 | 01 — Entrada, saída e variáveis | Tipos de dados, leitura e escrita |
| 2 | 02 — Operadores e aritmética | Expressões aritméticas, precedência |
| 3 | 03 — Condicionais | Fluxo condicional, operadores relacionais e lógicos |
| 4–5 | 04 — Laços | Repetição contada e condicional |
| 5–6 | 05 — Laços + acumuladores | Padrão acumulador, médias |
| 6–7 | 06 — Vetores | Estruturas de dados sequenciais |
| 7–8 | 07 — Funções | Modularização, escopo |
| 8 | 08 — Strings | Manipulação de texto |

---

## Rubricas de avaliação sugeridas

### Rubrica geral por atividade (0–10)

| Critério | Peso | Descrição |
|----------|------|-----------|
| Corretude | 4 | O programa produz a saída correta para todos os exemplos |
| Lógica | 2 | A solução usa a estrutura adequada ao enunciado (ex.: usa laço quando solicitado) |
| Legibilidade | 2 | Código bem indentado, nomes de variáveis descritivos |
| Comentários | 1 | Comentários claros e objetivos nos trechos principais |
| Boas práticas | 1 | Sem código morto, sem magic numbers sem explicação |

### Rubrica para projetos maiores

Adapte somando critérios como:
- Modularização (usa funções adequadamente)
- Tratamento de entradas inválidas
- Documentação (docstrings em Python / comentários em C)

---

## Como sugerir novas atividades

Veja [`CONTRIBUTING.md`](../CONTRIBUTING.md) para o processo completo.
Novos temas sugeridos para expandir o repositório:

- Recursão
- Matrizes (arrays bidimensionais)
- Arquivos (leitura e escrita)
- Ordenação (Bubble Sort, Selection Sort)
- Estruturas (`struct` em C / classes simples em Python)
