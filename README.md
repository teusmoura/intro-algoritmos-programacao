# Introdução à Programação — Algoritmos / Programação 1

Material educacional público para a disciplina de **Algoritmos / Programação 1 / Introdução à Programação**.
Destinado a alunos no primeiro contato com programação e a professores que desejam reutilizar ou adaptar o conteúdo.

## Sobre este repositório

Este repositório contém atividades práticas introdutórias com soluções em **Python** e **C**, organizadas de forma didática, com enunciados, exemplos e dicas de erros comuns.

- **Linguagens:** Python e C (em paralelo — mesma lógica, mesma saída)
- **Público-alvo:** iniciantes (primeiro contato com programação)
- **Estilo:** didático, comentado, com boas práticas simples
- **Padrão de E/S:** sem prompts por padrão (compatível com juiz online)

## Estrutura do repositório

```
intro-algoritmos-programacao/
├── README.md                        ← este arquivo
├── LICENSE                          ← licença do código (MIT)
├── LICENSE-CONTENT.md               ← licença dos textos (CC BY 4.0)
├── CONTRIBUTING.md                  ← como contribuir
├── CODE_OF_CONDUCT.md               ← código de conduta
├── .gitignore
├── docs/
│   ├── como-rodar.md                ← como executar Python e C em cada SO
│   └── guia-professores.md          ← como adaptar, avaliar, rubricas
├── templates/
│   └── atividade/
│       └── README.md                ← template para novas atividades
└── atividades/
    ├── 01-entrada-saida-variaveis/
    ├── 02-operadores-aritmetica/
    ├── 03-condicionais/
    ├── 04-lacos/
    ├── 05-lacos-acumuladores/
    ├── 06-vetores/
    ├── 07-funcoes/
    └── 08-strings/
```

Cada pasta de atividade segue o padrão:

```
atividades/XX-nome/
├── README.md          ← enunciado, exemplos, dicas, como rodar
├── python/
│   └── solucao.py
└── c/
    └── solucao.c
```

## Atividades disponíveis

| # | Tema | Conceitos |
|---|------|-----------|
| [01](atividades/01-entrada-saida-variaveis/) | Entrada, saída e variáveis | `input`/`scanf`, `print`/`printf`, tipos |
| [02](atividades/02-operadores-aritmetica/) | Operadores e aritmética | `+`, `-`, `*`, `/`, `%`, `**` |
| [03](atividades/03-condicionais/) | Condicionais | `if`, `elif`/`else if`, `else` |
| [04](atividades/04-lacos/) | Laços | `for`, `while` |
| [05](atividades/05-lacos-acumuladores/) | Laços + acumuladores | soma, média, contagem |
| [06](atividades/06-vetores/) | Vetores (listas/arrays) | criação, acesso, iteração |
| [07](atividades/07-funcoes/) | Funções | definição, parâmetros, retorno |
| [08](atividades/08-strings/) | Strings básico | comprimento, fatiamento, manipulação |

## Como escolher a linguagem (Python vs C)

| Critério | Python | C |
|----------|--------|---|
| Facilidade para iniciantes | ✅ Mais simples | ⚠️ Requer mais atenção a tipos e sintaxe |
| Velocidade de execução | ✅ Suficiente para aprendizado | ✅ Alta performance |
| Proximidade ao hardware | ❌ | ✅ Recomendado para cursos de Engenharia/Computação |
| Onde rodar sem instalar | [python.org/shell](https://www.python.org/shell/) | [Compiler Explorer](https://godbolt.org/) |

**Recomendação:** comece por Python se o foco for lógica. Use C se a disciplina exigir ou se quiser aprender gerenciamento de memória.

## Onde encontrar as soluções

Cada atividade possui a pasta `python/` e a pasta `c/` com `solucao.py` e `solucao.c`, respectivamente.
Consulte o `README.md` de cada atividade para enunciado, exemplos de entrada/saída e dicas.

## Como rodar

Veja o guia completo em [`docs/como-rodar.md`](docs/como-rodar.md).

Resumo rápido:

```bash
# Python
python atividades/01-entrada-saida-variaveis/python/solucao.py

# C
gcc atividades/01-entrada-saida-variaveis/c/solucao.c -o solucao
./solucao
```

## Licenças

- **Código-fonte** (arquivos `.py`, `.c`): [MIT License](LICENSE)
- **Textos, enunciados e documentação** (arquivos `.md`): [CC BY 4.0](LICENSE-CONTENT.md)

## Contribuindo

Veja [`CONTRIBUTING.md`](CONTRIBUTING.md) para saber como sugerir novas atividades ou correções.

