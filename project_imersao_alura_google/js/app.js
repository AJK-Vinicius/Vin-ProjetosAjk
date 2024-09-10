/**
 * Função para pesquisar dados e exibir os resultados.
 */
function pesquisar() {
  // Seleciona a seção "resultados" para exibir os resultados.
  const section = document.getElementById("resultados");

  // Obtém o valor do campo de pesquisa e converte para minúsculas.
  let campoPesquisa = document.getElementById("campo-pesquisa").value.toLowerCase();

  // Inicializa a string de resultados e a flag de encontro.
  let resultados = "";
  let encontrou = false;

  // Verifica se o campo de pesquisa está vazio.
  if (campoPesquisa.trim() === "") {
    // Exibe mensagem de erro para campo vazio.
    resultados = `
      <div class="mensagem">
        <p>Ops! Parece que você esqueceu de digitar algo para pesquisar. 😉</p>
        <p>Digite um termo e Clique em Pesquisar para encontrar o que procura.</p>
      </div>
    `;
  } else {
    // Itera pelos dados e busca por correspondências.
    for (const dado of dados) {
      // Converte o título e descrição para minúsculas.
      const titulo = dado.titulo.toLowerCase();
      const descricao = dado.descricao.toLowerCase();

      // Verifica se o título ou descrição contém o termo pesquisado.
      if (titulo.includes(campoPesquisa) || descricao.includes(campoPesquisa)) {
        // Adiciona o resultado à string de resultados.
        resultados += `
          <div class="caixa">
            <button class="buttonp">${dado.titulo}</button><br> 
            <p>${dado.descricao}</p> 
          </div>
        `;
        encontrou = true; // Define a flag como true se encontrar um resultado.
      }
    }

    // Exibe mensagem de erro para pesquisa sem resultados.
    if (!encontrou) {
      resultados = `
        <div class="mensagem">
          <p>Infelizmente, não encontramos nenhum resultado para "${campoPesquisa}". 😔</p>
          <p>Tente novamente com outro termo ou verifique se a ortografia está correta.</p>
        </div>
      `;
    }
  }

  // Define o conteúdo HTML da seção "resultados".
  section.innerHTML = resultados;
}