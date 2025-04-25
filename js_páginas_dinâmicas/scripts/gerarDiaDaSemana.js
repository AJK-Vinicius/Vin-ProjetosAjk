function gerarDiaDaSemana () {
        // dia da semana
        const diaDaSemana = new Date().toLocaleDateString("pt-BR", {
            weekday: "long"
        });
    
        // data
        const data = new Date().toLocaleDateString("pt-BR");
    
        // hora
        const hora = new Date().toLocaleTimeString("pt-BR", {
            hour: "numeric",
            minute: "numeric"
        })
    
        // recebendo os dados de data completa
        const dataCompleta = `${diaDaSemana} (${data}) às ${hora}.`;

        return dataCompleta;
}

export default gerarDiaDaSemana;