import { criarItemDaLista } from "./scripts/criarItemDaLista.js";
import verificarListaVazia from "./scripts/verificarListaVazia.js";

// Variaveis
const listaDeCompras = document.getElementById("lista-de-compras");
const botaoAdicionar = document.getElementById("adicionar-item");


// Função de callback / retorno
botaoAdicionar.addEventListener("click", (evento) => {
    evento.preventDefault(); // Função para coletar e evitar problemas ao recarregar a página
    const itemDaLista = criarItemDaLista();
    listaDeCompras.appendChild(itemDaLista);
    verificarListaVazia(listaDeCompras);
})

verificarListaVazia(listaDeCompras);
