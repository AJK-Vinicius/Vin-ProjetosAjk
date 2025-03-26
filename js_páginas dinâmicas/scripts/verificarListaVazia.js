//Lista vazia
const mensagemlistaVazia = document.querySelector(".mensagem-lista-vazia");

function verificarListaVazia(listaDeCompras) {
    const itemDaLista = listaDeCompras.querySelectorAll("li");
    if (itemDaLista.length === 0) {
        mensagemlistaVazia.style.display = "block"
    } else {
        mensagemlistaVazia.style.display = "none"
    }
}

export default verificarListaVazia;