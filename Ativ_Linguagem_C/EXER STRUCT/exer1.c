//Biblioteca padrão
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Stuct
struct veiculo{
	int ano;
	char proprietario[100], combustivel[100], cor[100], placa[100], numchassi[100], modelo[100];	
};


int main(){
	//Declaração de variaveis
	setlocale(LC_ALL,"portuguese");
	struct veiculo v; //variavel registro v

	//Dados
	strcpy(v.proprietario, "Vinícius");
	strcpy(v.combustivel, "Etanol");
	strcpy(v.cor, "Azul");
	strcpy(v.placa, "VL1821");
	strcpy(v.numchassi, "br12322lww00ll");
	strcpy(v.modelo, "Corola");
	v.ano=2005;

	
	//Saída de dados
	printf("Proprietário: %s\n", v.proprietario);
	printf("Combustivel: %s\n", v.combustivel);
	printf("Modelo %s\n", v.modelo);	
	printf("Cor: %s\n", v.cor);	
	printf("Num_chassi: %s\n", v.numchassi);
	printf("Ano: %d\n", v.ano);
	printf("Placa %s\n", v.placa);		
	
return 0;
} 
