# Como Rodar os Programas

Este guia explica como executar as soluções em **Python** e **C** nos principais sistemas operacionais.

---

## Python

### Instalação

| SO | Instrução |
|----|-----------|
| **Windows** | Baixe em [python.org](https://www.python.org/downloads/). Marque "Add Python to PATH" durante a instalação. |
| **macOS** | `brew install python3` (com [Homebrew](https://brew.sh/)) ou baixe em python.org. |
| **Linux (Debian/Ubuntu)** | `sudo apt update && sudo apt install python3` |

### Verificar instalação

```bash
python3 --version
# ou, no Windows:
python --version
```

### Executar um programa

```bash
# Linux / macOS
python3 atividades/01-entrada-saida-variaveis/python/solucao.py

# Windows
python atividades\01-entrada-saida-variaveis\python\solucao.py
```

### Passar entrada via arquivo (modo juiz online)

```bash
python3 solucao.py < entrada.txt
```

---

## C

### Instalação do compilador (GCC)

| SO | Instrução |
|----|-----------|
| **Windows** | Instale o [MinGW-w64](https://www.mingw-w64.org/) ou use o [WSL](https://learn.microsoft.com/pt-br/windows/wsl/install). No terminal MinGW: `gcc --version`. |
| **macOS** | `xcode-select --install` (instala Clang/GCC via Xcode Command Line Tools). |
| **Linux (Debian/Ubuntu)** | `sudo apt update && sudo apt install gcc` |

### Verificar instalação

```bash
gcc --version
```

### Compilar e executar

```bash
# Linux / macOS
gcc atividades/01-entrada-saida-variaveis/c/solucao.c -o solucao
./solucao

# Windows (MinGW)
gcc atividades\01-entrada-saida-variaveis\c\solucao.c -o solucao.exe
solucao.exe
```

### Passar entrada via arquivo (modo juiz online)

```bash
./solucao < entrada.txt
```

### Dicas de compilação

- Ative avisos do compilador para pegar erros: `gcc -Wall -Wextra solucao.c -o solucao`
- Para depurar com GDB: `gcc -g solucao.c -o solucao && gdb ./solucao`

---

## Ambientes online (sem instalar nada)

| Ferramenta | Linguagens | Link |
|------------|-----------|------|
| Python Shell oficial | Python | [python.org/shell](https://www.python.org/shell/) |
| Replit | Python e C | [replit.com](https://replit.com/) |
| Compiler Explorer | C e outros | [godbolt.org](https://godbolt.org/) |
| OnlineGDB | Python e C | [onlinegdb.com](https://www.onlinegdb.com/) |
