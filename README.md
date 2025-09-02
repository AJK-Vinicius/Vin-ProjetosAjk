# Gerenciador de Tarefas

Uma aplicação React para gerenciamento de tarefas com persistência local (localStorage).

## 🚀 Funcionalidades

- Adicionar novas tarefas
- Marcar/Desmarcar tarefas como concluídas
- Excluir tarefas
- Visualizar detalhes das tarefas
- Persistência de dados no localStorage

## 🛠️ Tecnologias Utilizadas

- React
- React Router DOM (para navegação entre páginas)
- Tailwind CSS (para estilização)
- Lucide React (para ícones)
- Vite (ambiente de desenvolvimento)

## 📦 Instalação

1. Clone o repositório
2. Instale as dependências:
   ```bash
   npm install --legacy-peer-deps
   ```
3. Inicie o servidor de desenvolvimento:
   ```bash
   npm run dev
   ```

## 🎯 Conceitos Aprendidos

### React
- Componentes funcionais
- Hooks (useState, useEffect)
- Props e Estado
- Listas e chaves (keys)
- Eventos

### React Router DOM
- Navegação entre páginas
- Parâmetros de rota
- useNavigate e useSearchParams

### Gerenciamento de Estado
- Estado local com useState
- Persistência no localStorage

### Estilização
- Tailwind CSS para estilos utilitários
- Componentes reutilizáveis

## 📝 Estrutura do Projeto

```
src/
├── components/       # Componentes reutilizáveis
│   ├── AddTask.jsx  # Formulário para adicionar tarefas
│   ├── Button.jsx   # Componente de botão estilizado
│   ├── Input.jsx    # Componente de input estilizado
│   └── Task.jsx     # Componente de exibição de tarefa
├── pages/           # Páginas da aplicação
│   └── TaskPage.jsx # Página de detalhes da tarefa
└── App.jsx          # Componente principal
```

## 📚 Recursos Adicionais

- [Documentação do React](https://reactjs.org/)
- [Documentação do React Router](https://reactrouter.com/)
- [Documentação do Tailwind CSS](https://tailwindcss.com/)

## 📄 Licença

Este projeto está sob a licença MIT.
