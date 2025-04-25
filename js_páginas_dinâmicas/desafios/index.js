// let tec = prompt ("qual sua tecnologia?");
// console.log ("Estou aprendendo "+tec);

// let a = 10;
// let b = 20;
// let c = a + b;

// console.log("a soma é: " +c)

// const h1 = document.querySelector('h1');
// h1.innerHTML = 'Hi bababa';

const inputItem = document.getElementById("input-item");
const adicionarItem = document.getElementById("adicionar-item");

adicionarItem.addEventListener('click', function() {
    evento.preventDefault()
    console.log(inputItem.value)
});

//criação de um elemenento
const containerCheckbox = document.createElement("div");
//atribuo sua classes
containerCheckbox.classList.add("container", "checkbox");

// crio o elemento input
const checkboxInput = document.createElement("input");
// defino seu tipo
checkboxInput.type = "checkbox";
// adciono sua classes
checkboxInput.classList.add("input", "fintcheckbox");

// contador de ID
let contador = 0; //variavel
checkboxInput.id = `checkbox_${++contador}`; //contador em si


const checkboxLabel = document.createElement("label"); // criação do elemento label
checkboxLabel.appendChild(checkboxInput); // adcionando o checkbox dentro da label
containerCheckbox.appendChild(checkboxLabel); // e a label dentro do contaier

// adcionando o container a main
document.querySelector("#mainListContainer").appendChild(containerCheckbox);