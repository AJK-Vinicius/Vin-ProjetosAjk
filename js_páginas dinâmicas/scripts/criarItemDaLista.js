import gerarDiaDaSemana from "./gerarDiaDaSemana.js";

const inputItem = document.getElementById("input-item");
let contador = 0;

export function criarItemDaLista() {
    // Verificação se o input esta vazio
    if (inputItem.value === "") {
        alert("Por favor insira um item!");
        return
    }

    //Criações
    // Elementos da lista
    const itemDaLista = document.createElement("li");
    const containerItemDaLista = document.createElement("div");

    // Adciono o item a lista
    containerItemDaLista.classList.add("lista-item-container");

    // Elementos do checkbox
    const inputCheckbox = document.createElement("input");
    inputCheckbox.type = "checkbox";
    inputCheckbox.id = "checkbox-" + contador++;

    // Elementos do item
    const nomeItem = document.createElement("p");
    nomeItem.innerText = inputItem.value;

    // Clicle no item
    inputCheckbox.addEventListener("click", function () {
        if (inputCheckbox.checked) {
            nomeItem.style.textDecoration = "line-through"
        } else {
            nomeItem.style.textDecoration = "none"
        }
    })

    // Atribuindo os Elementos (Árvore: pai e filho)
    containerItemDaLista.appendChild(inputCheckbox);
    containerItemDaLista.appendChild(nomeItem);
    itemDaLista.appendChild(containerItemDaLista);

    const dataCompleta = gerarDiaDaSemana();

    const itemData = document.createElement("p"); //o appendChild só recebe elementos
    itemData.innerText = dataCompleta;
    itemData.classList.add("texto-data")
    itemDaLista.appendChild(itemData);

    return itemDaLista;
}