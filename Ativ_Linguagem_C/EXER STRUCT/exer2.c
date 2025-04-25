//Biblioteca padrão
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Stuct
struct aluno{
	int turma1, turma2;
	char nome1[100],nome2[100];
	float media1, media2;
	
};


int main(){
	//Declaração de variaveis
	setlocale(LC_ALL,"portuguese");
	struct aluno a; //variavel registro p

	//Dados
	strcpy(a.nome1, "Mariana");
	strcpy(a.nome2, "Melissa");
	a.turma1= 1;
	a.turma2= 2;
	a.media1= 8;
	a.media2= 9.5;

	//Saída de dados
	printf("Turma: %d\n",a.turma1);
	printf("Nome: %s\n",a.nome1);
	printf("Média: %.2f\n",a.media1);
	printf("--------------------------------\n");	
	printf("Turma: %d\n",a.turma2);
	printf("Nome: %s\n",a.nome2);
	printf("Média: %.2f\n",a.media2);	
return 0;
} 
