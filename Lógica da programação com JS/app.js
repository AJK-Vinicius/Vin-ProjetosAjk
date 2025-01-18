let numeroMaximo = 10;
let numeroSecreto = parseInt(Math.random() * numeroMaximo + 1);
console.log(numeroSecreto);

alert('Boas vindas ao jogo do número secreto');
let chute;
let tentativas = 1;

// enquanto chute não for igual
while (chute != numeroSecreto) {
    chute = prompt('Escolha um número entre 1 e '+numeroMaximo);
    // Se o chute for igual ao número secreto
    if (numeroSecreto == chute) {
        break;
    } else {
        if (chute > numeroSecreto) {
            alert('O número secreto é menor que ' + chute);
        } else {
            alert('O número secreto é maior que ' + chute);
        }
        tentativas++;
    }
}

let palavraTentativa = tentativas > 1 ? 'tentativas' : 'tentativa' //Operador ternário
alert(`Isso aí você acertou ${numeroSecreto} com ${tentativas} ${palavraTentativa}`);

// if (tentativas > 1) {
//     alert(`Isso aí você acertou ${numeroSecreto} com ${tentativas} tentativas.`); // <- Concatenação
// } else { (`Isso aí você acertou ${numeroSecreto} com ${tentativas} tentativa.`); }