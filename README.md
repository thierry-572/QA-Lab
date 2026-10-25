
# 🧪 QA-LAB
### Laboratório de Qualidade de Software e Testes

<p align="center">
  <strong>Testar. Investigar. Documentar. Evoluir.</strong>
</p>

<p align="center">
  Um laboratório prático para estudar qualidade de software, validar requisitos e investigar comportamentos inesperados em aplicações.
</p>

---

## 📌 Sobre o projeto

O **QA-LAB** é um projeto pessoal de estudo e prática voltado à **Qualidade de Software (QA)**, com foco em testes funcionais, regras de negócio, identificação de defeitos e documentação técnica.

O projeto utiliza uma aplicação de gerenciamento de tarefas como ambiente de testes. A partir dela, são definidos comportamentos esperados, executados testes e registrados problemas encontrados durante a validação.

A proposta não é apenas desenvolver uma aplicação que funcione, mas também investigar:

- O sistema atende aos requisitos definidos?
- As regras de negócio são respeitadas?
- Entradas inválidas são tratadas corretamente?
- Os resultados observados correspondem aos resultados esperados?
- Os defeitos encontrados podem ser reproduzidos e documentados?

O QA-LAB reúne desenvolvimento e testes em um mesmo fluxo de trabalho, permitindo acompanhar a evolução do software e aprender com cada falha identificada.

## 🎯 Objetivos

- Praticar fundamentos de Quality Assurance (QA).
- Transformar requisitos em casos de teste verificáveis.
- Validar regras de negócio e requisitos não funcionais.
- Identificar, reproduzir e documentar bugs.
- Investigar casos de borda e entradas inválidas.
- Organizar evidências, registros e relatórios de testes.
- Desenvolver habilidades de depuração e resolução de problemas.
- Aplicar conceitos de C++, Linux e automação com Bash.
- Explorar a construção de interfaces gráficas com Qt.

## 🧩 Projeto sob teste

O ambiente de testes utiliza um gerenciador de tarefas (*Task Manager*), desenvolvido em C++.

A aplicação permite trabalhar com operações fundamentais de gerenciamento de tarefas, servindo como base para a validação de requisitos e regras de negócio.

### Funcionalidades

| ID | Funcionalidade | Descrição |
|---|---|---|
| RF01 | Criar tarefa | Cadastrar uma nova tarefa |
| RF02 | Listar tarefas | Consultar as tarefas cadastradas |
| RF03 | Concluir tarefa | Alterar o estado de uma tarefa |
| RF04 | Excluir tarefa | Remover uma tarefa cadastrada |

> Os identificadores acima organizam a documentação deste README. Podem ser ajustados para corresponder aos IDs utilizados nos documentos do projeto.

## 📋 Regras de negócio

As regras de negócio definem os comportamentos que o sistema deve respeitar independentemente da interface utilizada.

### Validação de entrada

O sistema deve impedir o cadastro de tarefas sem um nome válido.

**Exemplo de comportamento esperado:**

| Entrada | Resultado esperado |
|---|---|
| `Estudar C++` | Cadastro permitido |
| Campo vazio | Cadastro rejeitado |
| Somente espaços | Cadastro rejeitado |
| Nome duplicado | Permitido pela regra atual |

A aceitação de nomes duplicados é uma decisão de negócio do projeto, e não necessariamente um defeito. Um teste deve verificar o comportamento definido, não impor uma regra que o sistema não possui.

## 🔎 Estratégia de testes

O QA-LAB utiliza a comparação entre o resultado esperado e o resultado obtido para verificar o comportamento da aplicação.

### Categorias de testes

- **Testes funcionais:** verificam se as operações implementadas funcionam conforme os requisitos.
- **Testes negativos:** verificam como o sistema reage a entradas inválidas.
- **Testes de casos de borda:** investigam situações menos comuns, como campos contendo apenas espaços.
- **Testes de regressão:** verificam se alterações no código introduziram novos defeitos ou fizeram problemas antigos reaparecer.
- **Testes de interface:** verificam os comportamentos disponíveis na versão gráfica com Qt, quando aplicável.

### Exemplo de caso de teste

| Campo | Descrição |
|---|---|
| ID | CT-VALID-001 |
| Objetivo | Verificar a validação do nome da tarefa |
| Pré-condição | Aplicação iniciada |
| Entrada | Nome contendo somente espaços |
| Resultado esperado | Cadastro rejeitado |
| Resultado obtido | Registrar o comportamento observado |
| Status | A executar / Aprovado / Reprovado |

Um caso de teste bem definido permite reproduzir a verificação e comparar os resultados de diferentes execuções.

## 🐛 Investigação de bugs

Um dos objetivos centrais do QA-LAB é identificar comportamentos que contradizem os requisitos ou as regras de negócio documentadas.

### Exemplo de defeito investigado

**Título:** O sistema permite cadastrar uma tarefa contendo apenas espaços.

**Comportamento observado:** uma entrada formada por espaços pode ser aceita como nome de tarefa, embora não represente um nome válido.

**Comportamento esperado:** o sistema deve rejeitar entradas vazias ou compostas somente por espaços.

**Impacto:** dados inválidos podem ser armazenados, prejudicando a consistência das informações e a experiência de utilização.

**Possível abordagem técnica:** validar o conteúdo após remover espaços em branco das extremidades e confirmar que ainda existe texto significativo.

> Este exemplo documenta um comportamento investigado durante o desenvolvimento. O status e a resolução devem ser atualizados conforme os resultados dos testes mais recentes.

### Ciclo de tratamento de defeitos

1. Identificar um comportamento inesperado.
2. Reproduzir o problema.
3. Comparar o resultado observado com o esperado.
4. Registrar os passos necessários para reproduzi-lo.
5. Avaliar o impacto e a prioridade.
6. Corrigir o problema, quando aplicável.
7. Executar novamente o caso de teste.
8. Realizar testes de regressão relacionados.

## 🛠️ Tecnologias e ferramentas

| Tecnologia | Aplicação no projeto |
|---|---|
| C++ | Implementação da aplicação sob teste |
| Linux / Ubuntu | Ambiente de desenvolvimento e execução |
| Bash | Scripts auxiliares e automação de tarefas |
| Qt / Qt Creator | Desenvolvimento e experimentação com interface gráfica |
| Git | Controle de versão |
| GitHub | Hospedagem do código e documentação |
| Markdown | Organização dos requisitos, testes e relatórios |

## 📂 Organização do projeto

A estrutura do QA-LAB organiza os componentes da aplicação, os testes, os registros de defeitos e a documentação.

```text
qa-lab/
├── app/          # Código-fonte da aplicação
├── tests/        # Casos e recursos de teste
├── bugs/         # Registros de defeitos encontrados
├── reports/      # Relatórios e resultados
├── scripts/      # Scripts auxiliares e automação
├── docs/         # Requisitos e documentação técnica
└── build.sh      # Script de compilação, se mantido na raiz
```

> A árvore representa a organização planejada/conhecida do projeto. Ajuste os caminhos e nomes conforme a estrutura real do repositório.

## 🚀 Como executar

O projeto utiliza um ambiente Linux e possui um script de compilação chamado `build.sh`.

### 1. Clonar o repositório

```bash
git clone https://github.com/thierry-572/qa-lab.git
cd qa-lab
```

### 2. Permitir a execução do script

```bash
chmod +x build.sh
```

### 3. Compilar

```bash
./build.sh
```

O resultado da compilação depende da configuração atual do projeto. Caso o script execute testes ou gere arquivos de log, consulte sua implementação para verificar os comandos e os caminhos utilizados.

## 📈 Evolução do projeto

O QA-LAB está sendo desenvolvido de forma incremental.

- [x] Criar uma aplicação para servir como ambiente de testes.
- [x] Implementar operações básicas de gerenciamento de tarefas.
- [x] Definir comportamentos esperados para validação.
- [ ] Investigar problemas relacionados à entrada de dados.
- [ ] Iniciar uma versão com interface gráfica utilizando Qt.
- [ ] Ampliar a cobertura dos casos de teste.
- [ ] Consolidar relatórios de execução.
- [ ] Automatizar verificações recorrentes.
- [ ] Estruturar testes de regressão.
- [ ] Melhorar a integração entre a aplicação e a documentação dos testes.

>O projeto completo ainda está em andamento
## 🧠 Aprendizados

O desenvolvimento do QA-LAB permite praticar competências importantes para o trabalho com software:

- Análise de requisitos e regras de negócio.
- Planejamento e execução de casos de teste.
- Identificação e documentação de defeitos.
- Investigação de entradas inválidas e casos de borda.
- Depuração de aplicações em C++.
- Utilização de ferramentas de desenvolvimento no Linux.
- Automação de tarefas com Bash.
- Organização de projetos com Git e GitHub.
- Construção e validação de interfaces com Qt.

## 🔭 Próximos passos

A evolução do QA-LAB pode incluir uma estrutura de testes automatizados, relatórios mais detalhados e validações repetíveis para cada funcionalidade.

Uma possibilidade futura é integrar os testes à compilação do projeto, facilitando a identificação de regressões sempre que o código for alterado.

O objetivo é tornar o laboratório cada vez mais reproduzível, documentado e útil para investigar a qualidade do software.

## 👨‍💻 Autor

**Thierry Chagas**

- GitHub: [@thierry-572](https://github.com/thierry-572)

---

<p align="center">
  <strong>QA-LAB — qualidade não é apenas fazer funcionar; é verificar se funciona como deveria.</strong>
</p>
