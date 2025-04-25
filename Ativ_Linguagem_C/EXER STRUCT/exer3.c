//Biblioteca padrão
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Stuct
struct pessoa{
	int id;
	char nome[100], sexo[100];
	float alt;
	
};


int main(){
	//Declaração de variaveis
	setlocale(LC_ALL,"portuguese");
	struct pessoa p; //variavel registro p

	//Dados
	strcpy(p.nome, "Erick");
	strcpy(p.sexo, "Masculino");
	p.alt= 1.72;
	p.id= 17;

	//Saída de dados
	printf ("Nome %s\n",p.nome);
	printf ("Sexo: %s\n", p.sexo);
	printf ("Idade: %d\n", p.id);
	printf ("Altura: %.2f\n", p.alt);
	
	
	
	
		
return 0;
} 
