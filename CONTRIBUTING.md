# Como Contribuir

Obrigado pelo interesse em contribuir! Este repositório é aberto a professores, alunos e
entusiastas que queiram melhorar o material ou adicionar novas atividades.

## Tipos de contribuição

- **Nova atividade:** adicione uma pasta em `atividades/XX-nome/` seguindo o template em
  `templates/atividade/README.md`, com solução em Python **e** C.
- **Correção:** abra uma *issue* ou *pull request* descrevendo o problema e a correção.
- **Melhoria de enunciado/comentários:** edite diretamente e envie um PR.
- **Tradução ou adaptação:** veja a licença CC BY 4.0 em `LICENSE-CONTENT.md`.

## Padrões obrigatórios

1. **Uma pasta por atividade**, seguindo o padrão `atividades/XX-nome/`.
2. Sempre criar `python/solucao.py` **e** `c/solucao.c` com a **mesma lógica** e **mesma saída**.
3. Entrada/saída **sem prompts** por padrão (compatível com juiz online).
4. Código comentado e legível para iniciantes.
5. O `README.md` da atividade deve conter: título, enunciado, entradas/saídas,
   2 exemplos, restrições, dicas e como rodar.
6. Não adicione dependências externas.

## Passo a passo para enviar uma contribuição

```bash
# 1. Faça um fork do repositório no GitHub
# 2. Clone seu fork
git clone https://github.com/SEU-USUARIO/intro-algoritmos-programacao.git
cd intro-algoritmos-programacao

# 3. Crie uma branch para sua contribuição
git checkout -b atividade/09-minha-atividade

# 4. Faça as alterações, commit e push
git add .
git commit -m "feat: adiciona atividade 09 - minha atividade"
git push origin atividade/09-minha-atividade

# 5. Abra um Pull Request no GitHub
```

## Checklist para Pull Requests

- [ ] Pasta criada em `atividades/XX-nome/`
- [ ] `README.md` seguindo o template
- [ ] `python/solucao.py` funcional e comentado
- [ ] `c/solucao.c` funcional e comentado
- [ ] As duas soluções produzem a mesma saída para os mesmos exemplos
- [ ] Testado localmente (Python e C)

## Dúvidas?

Abra uma *issue* com a tag `pergunta`.
